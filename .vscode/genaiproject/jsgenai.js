function hitungStatistik() {
  let dataInput = document.getElementById("dataInput").value;
  let data = dataInput.split(",").map(Number).filter(n => !isNaN(n));

  if (data.length === 0) {
    alert("Masukkan data yang valid!");
    return;
  }

  // Urutkan data
  data.sort((a,b) => a-b);

  // Statistik deskriptif
  let mean = data.reduce((a,b) => a+b, 0) / data.length;
  let median = (data.length % 2 === 0) ?
    (data[data.length/2 - 1] + data[data.length/2]) / 2 :
    data[Math.floor(data.length/2)];
  let freq = {};
  data.forEach(n => freq[n] = (freq[n] || 0) + 1);
  let modus = Object.keys(freq).reduce((a,b) => freq[a] > freq[b] ? a : b);
  let varians = data.reduce((a,b) => a + (b - mean) ** 2, 0) / data.length;
  let stdDev = Math.sqrt(varians);

  document.getElementById("hasil").innerHTML = `
    <p>Mean: ${mean.toFixed(2)}</p>
    <p>Median: ${median}</p>
    <p>Modus: ${modus}</p>
    <p>Varians: ${varians.toFixed(2)}</p>
    <p>Standar Deviasi: ${stdDev.toFixed(2)}</p>
  `;

  // Distribusi Frekuensi (aturan Sturges)
  let k = Math.ceil(1 + 3.3 * Math.log10(data.length));
  let range = data[data.length-1] - data[0];
  let interval = Math.ceil(range / k);

  let tabel = document.getElementById("tabelDistribusi");
  tabel.innerHTML = "<tr><th>Kelas</th><th>Frekuensi</th><th>Frekuensi Kumulatif</th></tr>";

  let start = data[0];
  let freqKumulatif = 0;
  let labels = [], frekuensi = [], kumulatif = [];

  for (let i=0; i<k; i++) {
    let lower = start + i*interval;
    let upper = lower + interval - 1;
    let f = data.filter(x => x >= lower && x <= upper).length;
    freqKumulatif += f;

    tabel.innerHTML += `<tr>
      <td>${lower} - ${upper}</td>
      <td>${f}</td>
      <td>${freqKumulatif}</td>
    </tr>`;

    labels.push(`${lower}-${upper}`);
    frekuensi.push(f);
    kumulatif.push(freqKumulatif);
  }

  // Histogram
  let ctx1 = document.getElementById("histogram").getContext("2d");
  new Chart(ctx1, {
    type: 'bar',
    data: {
      labels: labels,
      datasets: [{
        label: 'Frekuensi',
        data: frekuensi,
        backgroundColor: 'rgba(75, 192, 192, 0.5)',
        borderColor: 'rgb(75, 192, 192)',
        borderWidth: 1
      }]
    }
  });

  // Ogive
  let ctx2 = document.getElementById("ogive").getContext("2d");
  new Chart(ctx2, {
    type: 'line',
    data: {
      labels: labels,
      datasets: [{
        label: 'Frekuensi Kumulatif',
        data: kumulatif,
        fill: false,
        borderColor: 'rgb(255, 99, 132)',
        tension: 0.1
      }]
    }
  });
}
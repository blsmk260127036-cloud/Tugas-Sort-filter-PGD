const angka = [10, 20, 30, 40];

const ada_20 = angka.includes(20);
console.log("apakah ada 20?", ada_20);

const posisi_30 = angka.indexOf(30);
console.log("index angka 30 adalah:", posisi_30);

const hasil_filter = angka.filter(x => x > 20);
console.log("hasil filter (> 20):", hasil_filter);
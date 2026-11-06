const suhu = [-3, 5, 0, -12, 8, 15, -1, 22];

const adaNol = suhu.includes(0);
console.log("Apakah 0 ada?", adaNol);

const suhuPositif = suhu.filter(x => x > 0);
console.log("Suhu positif:", suhuPositif);
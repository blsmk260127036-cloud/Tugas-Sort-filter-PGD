const nilai_siswa = [60, 85, 40, 90, 75, 50, 90];

if (nilai_siswa.includes(85)) {
    const posisi_85 = nilai_siswa.indexOf(85);
    console.log(`Nilai 85 ada di posisi ${posisi_85}`);
} else {
    console.log("Data tidak ditemukan");
}

const hasil_filter = nilai_siswa.filter(x => x > 75);
console.log(hasil_filter);
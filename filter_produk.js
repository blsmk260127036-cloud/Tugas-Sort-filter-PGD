const produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];

const hasKeyboard = produk.includes("Keyboard");
console.log("Ada Keyboard:", hasKeyboard);

const filter_Produk = produk.filter(x => x.length > 5);
console.log("Produk > 5 karakter:", filter_Produk);
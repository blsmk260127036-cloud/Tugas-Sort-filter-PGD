const angkaAsc = [5, 2, 9, 1];
const angkaDesc = [5, 2, 9, 1];

angkaAsc.sort((a, b) => a - b);
console.log("ascending:", angkaAsc);

angkaDesc.sort((a, b) => b - a);
console.log("descending:", angkaDesc);
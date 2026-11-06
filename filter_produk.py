produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]

ada_keyboard = "Keyboard" in produk
print("Ada Keyboard:", ada_keyboard)

filter_produk = [x for x in produk if len(x) > 5]
print("Produk > 5 karakter:", filter_produk)
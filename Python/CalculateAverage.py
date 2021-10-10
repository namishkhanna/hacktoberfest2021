from __future__ import print_function
import sys

def main():
	print ("Program Pembagian Bilangan\n")
	print ("Author: FR11ZZ\n")
	print ("hargailah Karya seseorang\n")
	print ("Dengan cara tidak mengganti nama Author\n")

	a = float(raw_input("Masukkan a: "))
	b = float(raw_input("Masukkan b: "))

	try:
		hasil = a/ b 
	except ZeroDivisionError:
		print("\nERROR: Nilai b tidak boleh nol")
		sys.exit(1)

	print ("\na : ", a)
	print ("b : ", b)
	print (" a / b = ", hasil)

if __name__ == '__main__':
	main()
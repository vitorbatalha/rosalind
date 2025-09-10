with open('Python Village/INI2/rosalind_ini2.txt', 'r') as file:
    line = file.readline()
    a, b = map(int, line.split())

print (a**2 + b**2)


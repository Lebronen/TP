#!/usr/bin/env python3


""" A REMPLIR
1. for i in range(10) : print(i)

2. list(i for i in range(10))
retourne : [0, 1, 2, 3, 4, 5, 6, 7, 8, 9] 

list(i for i in range(2,11)) 
retourne : [2, 3, 4, 5, 6, 7, 8, 9, 10]

list(i for i in range(2,11,2)
retourne : [2, 4, 6, 8, 10]

list(i for i in range(10,1,-2))
retourne : [10, 8, 6, 4, 2]

3.a
L1 = list(i for i in range(0,13,2)) = [0, 2, 4, 6, 8, 10, 12]

L2 = list(i for i in "abcdef") = ['a', 'b', 'c', 'd', 'e', 'f']

3.b L1.reverse()

3.c
L3 = list(zip(L2,L1)) = [('a', 12), ('b', 10), ('c', 8), ('d', 6), ('e', 4), ('f', 2)]

4.a L3[2:5]
4.b L3[1::2]
4.c L4 = L3
4.d L5 = list(i for i in range(0,140,7))
	for i in range (20):
		if i % 3 == 2:
			L5[i] = 0
[i
6 L =  [i for i in range(36) if i % 3 == 2] = [2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35]
	LD = L[:len(L)//2] = [20, 23, 26, 29, 32, 35]
	LG = L[len(L)//2:] = [2, 5, 8, 11, 14, 17]
	voir f et g dans les fonctions en-dessous
	f(LD) -> LD = [2024, 5, 8, 11, 14, 17]
	f(LG) -> LG = [2042, 23, 26, 29, 32, 35]
	g(L) -> L = [2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 2057]
	g(L[len(L)//2:]) -> L = [2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 2057]

8.a	help(somme_impairs) -> Help on function somme_impairs in module tp1_ex3:

	somme_impairs(x)
8.b	help(testDataSomme) -> Help on function testDataSomme in module tp1_ex3:

	testDataSomme()
    retourne un jeu de tests

8.c un commentaire entre triple crochets dans une fonction, est
    est affiché dans l'aide en ligne

"""
def crible_eratosthene(n):
# calcule la table de booléens où la i-ème position est True
# si et seulement si i est un nombre premier.
	tab = [True] * n
	if (n <= 1):
		return False
	for i in range(2,n):
		#for j in range(i*i - 1, n, i):
			#tab[j] = False
		tab[(i*i- 1):n:i] =  [False] * (((n + i - 1) - (i * i - 1)) // i)
	return tab[n - 1]

def test_crible(n):
    c=crible_eratosthene(n)
    for i in range(len(c)):
        if c[i]:
           print(i, end= ' ')
    print()


#
def	f(tab):
	tab[0] += 2022

def	g(tab):
	tab[-1] += 2022
#
def somme_impairs(x) :
	if x == 0:
		return 0
	if x % 2 == 0:
		return somme_impairs(x - 1)
	return x + somme_impairs(x - 1)

	

def test_somme(n) :
# teste que la somme des entiers impairs de 1 à x =
#    (x/2)*(x/2) si x est pair
#    (x+1)/2*(x+1)/2 sinon
# pour tout 1 <= x <= n
	for i in range (n):
		if i % 2 == 0 and somme_impairs(i) != (i/2)*(i/2):
			return False
		if i % 2 != 0 and somme_impairs(i) != (i+1)/2*(i+1)/2:
			return False
	return True


# AJOUTER D'AUTRES TESTS
#  [valeur_x, resultat_attendu]
def testDataSomme() :
    """retourne un jeu de tests"""
    return [[0, 0], [3, 4], [24, 144], [-3, 0]]


#
# NE PAS MODIFIER
#
def testOp(op, data) :
	print('\n\n* Test function %s:' % op.__name__)
	score = 0
	ldata = len(data)
	for i, dt in enumerate(data) :
		print('** test %d/%d : ' % (i + 1, ldata), end='')
		x = dt[0]
		refr = dt[1]
		r = op(x)
		if r == refr :
			score+=1
			print('ok')
		else :
			print('ECHEC')
			print('    entree  : %s' % x)
			print('    calcule : %s' % r)
			print('    attendu : %s' % refr)
	print('** Score %d/%d' % (score, ldata))


if __name__ == '__main__':
        test_crible(50)
        testOp(somme_impairs, testDataSomme())

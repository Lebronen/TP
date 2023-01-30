#!/usr/bin/env python3

#
# A REMPLIR
#1. si elle n'est pas definie elle n'existe pas dans l'environement, si elle est egale a None ou a une chaine vide alors elle existe bien et on peut y acceder et meme les afficher
#
#2. Z == None
#
#3. "sans valeur" if Z == None else "chaine vide" if Z == "" else "autre
#
#4. pour True if x > 0 else False :
#   - 3 : True
#   - -5 : False
#   - None : TypeError: '>' not supported between instances of 'NoneType' and 'int'
#   - Non-defini : NameError: name 'x' is not defined
#
# pour None if x is None else True if x > 0 else False :
#   - 3 : True
#   - -5 : False
#   - None : None 
#   - Non-defini : NameError: name 'x' is not defined
#
#
#
# Expression conditionnelle
# retourne True si x > 0, False si x <= 0 ou si x vaut None
def expression_5(x) :
    return False if x is None else x > 0


#
# AJOUTER D'AUTRES TESTS
#  [valeur_x, resultat_attendu]
def testData():
	return [[5, True], [None, False], [-2, False], [-3.4, False]]


#
# NE PAS MODIFIER
#
def testExpr(data) :
	score = 0
	ldata = len(data)
	for i, dt in enumerate(data) :
		print('  test %d/%d : ' % (i + 1, ldata), end='')
		x = dt[0]
		refr = dt[1]
		r = expression_5(x)
		if r == refr :
			score+=1
			print('ok')
		else :
			print('ECHEC')
			print('    entree  : %s' % x)
			print('    calcule : %s' % r)
			print('    attendu : %s' % refr)

	print('Score %d/%d' % (score, ldata))


if __name__ == '__main__':
	testExpr(testData())

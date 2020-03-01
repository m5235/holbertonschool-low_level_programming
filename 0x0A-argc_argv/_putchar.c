# inclut  < unistd.h >

/ * *
 * _putchar - écrit le caractère c sur stdout
 * @c: le caractère à imprimer
 *
 * Retour: En cas de succès 1.
 * En cas d'erreur, -1 est renvoyé et errno est correctement défini.
 * /
int  _putchar ( char c)
{
	return ( écrire ( 1 , & c, 1 ));
}
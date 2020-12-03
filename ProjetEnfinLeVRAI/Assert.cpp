#include "assert.h"

assert::assert() {
	affirme = true;
}

void assert::assertTrue(bool exemple) {
	if (affirme == exemple) {
		MessageBox::Show("Juste");
	}
	else {
		MessageBox::Show("erreur de vérification");
	}
}

void assert::assertEqualFloat(float exemple, float affirmation) {
	if (exemple == affirmation) {
		MessageBox::Show("Juste");
	}
	else {
		MessageBox::Show("erreur de valeur commune");
	}
}

void assert::assertEqual(int exemple, int affirmation) {
	if (exemple == affirmation) {
		MessageBox::Show("Juste");
	}
	else {
		MessageBox::Show("erreur de valeur commune");
	}
}

void assert::assertEqualString(String^ exemple, String^ affirmation)
{
	if (exemple == affirmation) {
		MessageBox::Show("Juste");
	}
	else {
		MessageBox::Show("erreur de valeur commune");
	}
}

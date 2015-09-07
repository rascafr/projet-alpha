/**
 * Voici un fichier typique que vous pouvez modifier afin d'effectuer des tests avec GitHub
 */
#include <fusee.h>
#include <reacteur.h>
#include <moteur.h>

// Lorem ipsum
void lancementFusee (void) {

	// Code random histoire d'avoir des lignes
	Moteur m;
	MoteurInit(m);
	MoteurReparer(m);

	Fusee f;
	FuseeInit(f);
	f.moteur = m;
    
    /**
     * Code ajouté par David.
     */
    Avion av;
    av.decolle(mach3); // Attntion mach3 n'est pas déclaré

    int a = 1; // allumage des moteurs de la RAM
    
    /**
     Et là DSU rajoute un truc. et moi un mot
     */
    
    /**
     * Je rajoute encore un truc.
     */
}
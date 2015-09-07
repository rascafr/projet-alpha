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
    av.decolle(mach3);
}
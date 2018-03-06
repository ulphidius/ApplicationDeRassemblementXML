/*
 * main.c
 *
 *  Created on: 18 févr. 2018
 *      Author: louis
 */
#include "library.h"
#include "fusionOfXmlFile.h"

int main(){
	// Génération des dossiers
	checkProfileDirectoryExistFinal();
	checkProfileDirectoryExistSource();

	// Création du fichier jounalier
	createFinalXmlFile();

	// Lancement de la sécance principal
	generateDaylyXmlFile();

	// Supression des fichiers dans l'archive
	destroyFile();
	return 0;
}


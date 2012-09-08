/*
 *  probieren.cpp
 *  JavaFunctionsFramework
 *
 *  Created by Tom Kaiser on 21.08.11.
 *  Copyright 2011 Tom Kaiser. All rights reserved.
 *
 */

#include <iostream>
#include <cstring>
using namespace std;

class PhrasOMat
{
	int main()
	{
		char *wortListeEins[] = { "verlaessliche", "erfolgsorientierte", "webbasierte", "allumfassende", "clevere", "kundenorientierte", "pfadkritische", "dynamische", "konkurrenzfaehige", "verteilte", "zielgerichtete" };
		//const char *wortListeZwei[] = { "gepowerte ", "haftende ", "Mehrwert-", "zentrierte ", "geclusterte ", "proaktive ", "Out-of-the-Box-", "positionierte ", "vernetzte ", "fokussierte ", "kraftvolle ", "geordnete ", "geteilte ", "kooperative ", "beschleunigte ", "Multi-Tier-", "Enterprise-", "B2B-", "Frontend-" };
		//const char *wortListeDrei[] = { "Schicht", "Endstufe", "Loesung", "Architektur", "Kernkompetenz", "Strategie", "Kooperation", "Ausrichtung", "Raeumlichkeit", "Vision", "Dimension", "Mission" };
		
		char *buffer = *wortListeEins;
		while (buffer != "/n") {
			buffer++;
			cout << buffer;
		}
		
		return 0;
	}
};

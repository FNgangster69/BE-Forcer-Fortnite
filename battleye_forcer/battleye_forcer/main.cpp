#include <iostream>
#include <chrono>
#include <Windows.h>
#include <tlhelp32.h>

#include "Forcer.hpp"
#include "Log.h"

/*
* Fortnite Balls Lyrics
Ich springe ab, wo soll ich hin? Wo soll ich landen?

Pleasant Park, Greasy Groove, Junk Junktion

In der Lobby war ich grade noch am Tanzen

In Tilted Towers kann sich keiner mehr verschanzen

Komme auf, suche Loot, brauch 'ne Double Pump

Lad sie nach, kille alle ohne Widerstand

Und schluck ich trotzdem ein paar Sch�sse, hab ich Medizin dabei

Erst die kleinen, dann die Gro�en

Kostet-Kostet �bertrieben Zeit

Schl�rf, schl�rf, schl�rf, schl�rf, schl�rf, schl�rf, schl�rf, schl�rf

Schl�rf, schl�rf, schl�rf, schl�rf, schl�rf, hey

Solo v. Sqaud

Kille jeden Bot

Und hab ich kein'n Heal, ja, dann brauch ich ein'n Boost

Kommt vom Himmel der Loot

Jeder Spieler ist mein Diener

Denn er sammelt f�r mich Loot, ey

Bau mit deinem Holz eine Villa

Ja, mir geht es gut

Ich bin einer von Hundert

Trolle mit meinem Jumppad

Komm in deine Base runter

Flex dich von hinten weg

Ich bin voll equipt, hab 200 Leben

Stoppen kann mich keiner, denn ich bin noch �berlegen

Shit, ich hab's voll vercheckt

Ich werde von der Zone gereckt, ich bin auf

Flucht vor der Zone

Zwischendurch ducken, jumpen, nachladen und dann pumpen

Flucht vor der Zone

Bau ein Jumppad, um von oben Kills zu landen

Flucht vor der Zone

Flucht vor der Zone

Schl�rf, schl�rf, schl�rf, schl�rf, schl�rf, schl�rf, schl�rf, schl�rf

Schl�rf, schl�rf, schl�rf, schl�rf, schl�rf

Hunderttausend V-Bucks auf'm Konto

Investiert hab ich �ber tausend Euro

Alle Skins in mei'm Spind, ey

Such mir aus, wer ich bin

Kill ich dich, mach ich den Carlton-Dance

Kille die Squads, brauche keine Friends

Am Lagerfeuer farme ich HP

Und tanze auf den Beats von Dr. Dre

Ich will 'ne goldene Scar-H

Sie macht ra-ta-ta-ta

Rocketlauncher gez�ckt

Schie� sie in die Base auf Gut Gl�ck

Ich bin voll equipt, hab 200 Leben

Stoppen kann mich keiner, denn ich bin noch �berlegen

Shit, ich hab's voll vercheckt

Ich werde von der Zone gereckt, ich bin auf

Flucht vor der Zone

Zwischendurch ducken, jumpen, nachladen und dann pumpen

Flucht vor der Zone

Bau ein Jumppad, um von oben Kills zu landen

Flucht vor der Zone

Flucht vor der Zone

Es ist das 1-0-1, yeah

Mein Inventar ist voller goldener Waffen, ich bin bei 200 Prozent

Mein Schild ist alright, ey

Die Zone r�ckt n�her, n�her

Du bist ein Feigling, bleibst in Deckung

Und klammerst dich ganz verzweifelnd an die Zeit

Aber ich wei�

Du bist nur auf

Flucht vor der Zone

Zwischendurch ducken, jumpen, nachladen und dann pumpen

Flucht vor der Zone

Bau ein Jumppad, um von oben Kills zu landen

Flucht vor der Zone

Flucht vor der Zone

Es ist das 1-0-1, yeah

Die Zone r�ckt n�her, n�her

Flucht vor der Zone
*/


auto main( ) -> void
{
	
	while ( utils::get_process_id( L"EasyAntiCheat.exe" ) || utils::get_process_id( L"FortniteClient-Win64-Shipping_EAC.exe" ) )
	{
		forcer::kill_eac( );
	}
	forcer::force_battleye( );

	std::cin.get( );
}

/*
 * i18n.c: Internationalization
 *
 * See the main source file 'vdr.c' for copyright information and
 * how to reach the author.
 *
 * $Id: i18n.c 1.6 2000/11/19 12:12:53 kls Exp $
 *
 * Slovenian translations provided by Miha Setina <mihasetina@softhome.net>
 *
 */

/*
 * How to add a new language:
 *
 * 1. Announce your translation action on the Linux-DVB mailing
 *    list to avoid duplicate work.
 * 2. Increase the value of 'NumLanguages'.
 * 3. Insert a new line in every member of the 'Phrases[]' array,
 *    containing the translated text for the new language.
 *    For example, assuming you want to add the Italian language,
 *
 *       { "English",
 *         "Deutsch",
 *       },
 *
 *    would become
 *
 *       { "English",
 *         "Deutsch",
 *         "Italiano",
 *       },
 *
 *    and so on. Insert your language so that all the entries
 *    following 'English' will be sorted alphabetically, and write
 *    the name of your language in your language (not in English,
 *    which means that it should be 'Italiano', not 'Italian').
 *    Note that only the characters defined in 'fontosd.c' will
 *    be available!
 * 4. Compile VDR and test the new language by switching to it
 *    in the "Setup" menu.
 * 5. Send the modified 'i18n.c' file to <kls@cadsoft.de> to have
 *    it included in the next version of VDR.
 */

#include "i18n.h"
#include <stdio.h>
#include "config.h"
#include "tools.h"

const int NumLanguages = 3;

typedef const char *tPhrase[NumLanguages];

const tPhrase Phrases[] = {
  // The name of the language (this MUST be the first phrase!):
  { "English",
    "Deutsch",
    "Slovenski",
  },
  // Menu titles:
  { "Main",
    "Hauptmen�",
    "Glavni meni",
  },
  { "Schedule",
    "Programm",
    "Urnik",
  },
  { "Channels",
    "Kan�le",
    "Kanali",
  },
  { "Timers",
    "Timer",
    "Termini",
  },
  { "Recordings",
    "Aufzeichnungen",
    "Posnetki",
  },
  { "Setup",
    "Einstellungen",
    "Nastavitve",
  },
  { "Commands",
    "Befehle",
    "Ukazi",
  },
  { "Edit Channel",
    "Kanal Editieren",
    "Uredi kanal",
  },
  { "Edit Timer",
    "Timer Editieren",
    "Uredi termin",
  },
  { "Event",
    "Sendung",
    "Oddaja",
  },
  { "Summary",
    "Inhalt",
    "Vsebina",
  },
  { "Schedule - %s",
    "Programm - %s",
    "Urnik - %s",
  },
  { "What's on now?",
    "Was l�uft jetzt?",
    "Kaj je na sporedu?",
  },
  { "What's on next?",
    "Was l�uft als n�chstes?",
    "Kaj sledi?",
  },
  // Button texts (must not be more than 10 characters!):
  { "Edit",
    "Editieren",
    "Uredi",
  },
  { "New",
    "Neu",
    "Novo",
  },
  { "Delete",
    "L�schen",
    "Odstrani",
  },
  { "Mark",
    "Markieren",
    "Oznaci",
  },
  { "Record",
    "Aufnehmen",
    "Posnemi",
  },
  { "Play",
    "Wiedergabe",
    "Predavajaj",
  },
  { "Resume",
    "Weiter",
    "Nadaljuj",
  },
  { "Summary",
    "Inhalt",
    "Vsebina",
  },
  { "Switch",
    "Umschalten",
    "Preklopi",
  },
  { "Now",
    "Jetzt",
    "Sedaj",
  },
  { "Next",
    "N�chste",
    "Naslednji",
  },
  { "Schedule",
    "Programm",
    "Urnik",
  },
  // Confirmations:
  { "Delete Channel?",
    "Kanal l�schen?",
    "Odstrani kanal?",
  },
  { "Delete Timer?",
    "Timer l�schen?",
    "Odstani termin?",
  },
  { "Delete Recording?",
    "Aufzeichnung l�schen?",
    "Odstrani posnetek?",
  },
  { "Stop Recording?",
    "Aufzeichnung beenden?",
    "Koncaj snemanje?",
  },
  // Channel parameters:
  { "Name",
    "Name",
    "Naziv",
  },
  { "Frequency",
    "Frequenz",
    "Frekvenca",
  },
  { "Polarization",
    "Polarisation",
    "Polarizacija",
  },
  { "Diseqc",
    "Diseqc",
    "Diseqc",
  },
  { "Srate",
    "Srate",
    "Srate",
  },
  { "Vpid",
    "Vpid",
    "Vpid",
  },
  { "Apid",
    "Apid",
    "Apid",
  },
  { "CA",
    "CA",
    "CA",
  },
  { "Pnr",
    "Pnr",
    "Pnr",
  },
  // Timer parameters:
  { "Active",
    "Aktiv",
    "Aktivno",
  },
  { "Channel",
    "Kanal",
    "Kanal",
  },
  { "Day",
    "Tag",
    "Dan",
  },
  { "Start",
    "Anfang",
    "Zacetek",
  },
  { "Stop",
    "Ende",
    "Konec",
  },
  { "Priority",
    "Priorit�t",
    "Prioriteta",
  },
  { "Lifetime",
    "Lebensdauer",
    "Veljavnost",
  },
  { "File",
    "Datei",
    "Datoteka",
  },
  // Error messages:
  { "Channel is being used by a timer!",
    "Kanal wird von einem Timer benutzt!",
    "Urnik zaseda kanal!",
  },
  { "Can't switch channel!",
    "Kanal kann nicht umgeschaltet werden!",
    "Ne morem preklopiti kanala!",
  },
  { "Timer is recording!",
    "Timer zeichnet gerade auf!",
    "Snemanje po urniku!",
  },
  { "Error while deleting recording!",
    "Fehler beim L�schen der Aufzeichnung!",
    "Napaka pri odstranjevanju posnetka!",
  },
  { "*** Invalid Channel ***",
    "*** Ung�ltiger Kanal ***",
    "*** Neznan kanal ***",
  },
  { "No free DVB device to record!",
    "Keine freie DVB-Karte zum Aufnehmen!",
    "Ni proste DVB naprave za snemanje!",
  },
  { "Channel locked (recording)!",
    "Kanal blockiert (zeichnet auf)!",
    "Zaklenjen kanal (snemanje)!",
  },
  // Setup parameters:
  { "OSD-Language",
    "OSD-Sprache",
    "OSD-jezik",
  },
  { "PrimaryDVB",
    "Prim�res Interface",
    "Primarna naprava",
  },
  { "ShowInfoOnChSwitch",
    "Info zeigen",
    "Pokazi naziv kanala",
  },
  { "MenuScrollPage",
    "Seitenweise scrollen",
    "Drsni meni",
  },
  { "MarkInstantRecord",
    "Direktaufz. markieren",
    "Oznaci direktno snemanje",
  },
  { "LnbFrequLo",
    "Untere LNB-Frequenz",
    "Spodnja LNB-frek.",
  },
  { "LnbFrequHi",
    "Obere LNB-Frequenz",
    "Zgornja LNB-frek.",
  },
  { "SetSystemTime",
    "Systemzeit stellen",
    "Sistemski cas",
  },
  { "MarginStart",
    "Zeitpuffer bei Anfang",
    "Premor pred zacetkom",
  },
  { "MarginStop",
    "Zeitpuffer bei Ende",
    "Premor za koncem",
  },
  { "EPGScanTimeout",
    "Zeit bis EPG Scan",
    "Cas do EPG pregleda",
  },
  // The days of the week:
  { "MTWTFSS",
    "MDMDFSS",
    "PTSCPSN",
  },
  // Learning keys:
  { "Learning Remote Control Keys",
    "Fernbedienungs-Codes lernen",
    "Ucim se kod upravljalca",
  },
  { "Phase 1: Detecting RC code type",
    "Phase 1: FB Code feststellen",
    "Faza 1: Sprejemanje IR kode",
  },
  { "Press any key on the RC unit",
    "Eine Taste auf der FB dr�cken",
    "Pritisnite tipko na upravljalcu",
  },
  { "RC code detected!",
    "FB Code erkannt!",
    "IR koda sprejeta!",
  },
  { "Do not press any key...",
    "Keine Taste dr�cken...",
    "Ne pritiskajte tipk...",
  },
  { "Phase 2: Learning specific key codes",
    "Phase 2: Einzelne Tastencodes lernen",
    "Faza 2: Ucenje posebnih kod",
  },
  { "Press key for '%s'",
    "Taste f�r '%s' dr�cken",
    "Pritisnite tipko za '%s'",
  },
  { "Press 'Up' to confirm",
    "'Auf' dr�cken zum Best�tigen",
    "Pritisnite tipko 'Gor' za potrditev",
  },
  { "Press 'Down' to continue",
    "'Ab' dr�cken zum Weitermachen",
    "Pritisnite tipko 'Dol' za nadaljevanje",
  },
  { "(press 'Up' to go back)",
    "('Auf' dr�cken um zur�ckzugehen)",
    "(pritisnite 'Gor' za nazaj)",
  },
  { "(press 'Down' to end key definition)",
    "('Ab' dr�cken zum Beenden",
    "(pritisnite 'Dol' za konec)",
  },
  { "Phase 3: Saving key codes",
    "Phase 3: Codes abspeichern",
    "Faza 3: Shranjujem kodo",
  },
  { "Press 'Up' to save, 'Down' to cancel",
    "'Auf' speichert, 'Ab' bricht ab",
    "'Gor' za potrditev, 'Dol' za prekinitev",
  },
  // Key names:
  { "Up",
    "Auf",
    "Gor",
  },
  { "Down",
    "Ab",
    "Dol",
  },
  { "Menu",
    "Men�",
    "Meni",
  },
  { "Ok",
    "Ok",
    "Ok",
  },
  { "Back",
    "Zur�ck",
    "Nazaj",
  },
  { "Left",
    "Links",
    "Levo",
  },
  { "Right",
    "Rechts",
    "Desno",
  },
  { "Red",
    "Rot",
    "Rdeca",
  },
  { "Green",
    "Gr�n",
    "Zelena",
  },
  { "Yellow",
    "Gelb",
    "Rumena",
  },
  { "Blue",
    "Blau",
    "Modra",
  },
  // Miscellaneous:
  { "yes",
    "ja",
    "da",
  },
  { "no",
    "nein",
    "ne",
  },
  { "Stop replaying",
    "Wiedergabe beenden",
    "Prekini ponavljanje",
  },
  { "Stop recording ", // note the trailing blank!
    "Aufzeichnung beenden ",
    "Prekini shranjevanje ",
  },
  { "Switching primary DVB...",
    "Prim�res Interface wird umgeschaltet...",
    "Preklapljanje primarne naprave...",
  },
  { "Up/Dn for new location - OK to move",
    "Auf/Ab f�r neue Position - dann OK",
    "Gor/Dol za novo poz. - Ok za premik",
  },
  { NULL }
  };

const char *tr(const char *s)
{
  if (Setup.OSDLanguage) {
     for (const tPhrase *p = Phrases; **p; p++) {
         if (strcmp(s, **p) == 0) {
            const char *t = (*p)[Setup.OSDLanguage];
            if (t && *t)
               return t;
            }
         }
     esyslog(LOG_ERR, "no translation found for '%s' in language %d (%s)\n", s, Setup.OSDLanguage, Phrases[0][Setup.OSDLanguage]);
     }
  return s;
}

const char * const * Languages(void)
{
  return &Phrases[0][0];
}


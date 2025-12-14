#include <iostream>
using namespace std;


// ---------------------------------------------------------
// CHARACTER VARIABLES (REQUIRED AND OR OPTIONAL)
// ---------------------------------------------------------

bool isMerciful = false;                 // Scene 1 outcome, which tracks Robert's moral decision path
int Blazer_Impression_Score = 0;         // Scene 3 impact, which tracks Blonde Blazer's perception of Robert
bool isRomanticTensionActive = false;    // Scene 4 outcome, which tracks the outcome of the billboard scene
int Robert_Mercy_Rating = 0;             // Adds depth and is used to track weighted outcomes



// ---------------------------------------------------------
// FUNCTION DECLARATIONS (THE SCENE DRIVERS)
// ---------------------------------------------------------

void scene_interrogation();
void scene_street_fight();
void scene_bar_flambae();
void scene_billboard();
void scene_combat_toxic();
void epilogue_summary();



// ---------------------------------------------------------
// MAIN FUNCTION (WHERE THE SEQUENCE IS BEING CONTROLLED)
// ---------------------------------------------------------

int main() {
    cout << "------------------------------------------------" << endl;
    cout << "----- DISPATCH: ROBERT'S PIVOT - EPISODE 1 -----" << endl;
    cout << "------------------------------------------------" << endl;

    scene_interrogation();
    scene_street_fight();
    scene_bar_flambae();
    scene_billboard();
    scene_combat_toxic();
    epilogue_summary();

    return 0;
}



// ---------------------------------------------------------
// 1. THE MORAL CROSSROADS — APARTMENT INTERROGATION
// ---------------------------------------------------------

void scene_interrogation() {
    int choice;

    cout << endl << "[ SCENE 1: Apartment Rooftop ]" << endl;
    cout << "Soothing Goon dangling from the ledge of the building, screaming for help." << endl;
    cout << "1. Pull Him Back ( Demonstrates restraint and compassion; establishes Robert as merciful )" << endl;
    cout << "2. Let Him Drop ( Shows ruthless efficiency; creates fear-based respect )" << endl;
    cout << "Choice: ";
    cin >> choice;

    while (choice != 1 && choice != 2) {
        cout << "Invalid choice. Please enter 1 or 2: ";
        cin >> choice;
    }

    cout << "---------------------------------------------------------------------------------------------";
    if (choice == 1) {
        isMerciful = true;
        Robert_Mercy_Rating += 10;
        cout << endl << "You pull him back. He gasps in relief. Robert shows compassion." << endl;
    }  
    else {
        isMerciful = false;
        Robert_Mercy_Rating -= 5;
        cout << endl << "You let him fall. A cold, efficient decision. The city will whisper." << endl;
    }
    cout << "---------------------------------------------------------------------------------------------" << endl;
}


// ---------------------------------------------------------
// 2. TACTICAL CONSEQUENCE — STREET FIGHT
// ---------------------------------------------------------

void scene_street_fight() {
    int choice;

    cout << endl << "[ SCENE 2: Dark Alley Street Fight ]" << endl;
    cout << "An evil person swings a crowbar at you." << endl;
    cout << "1. Right Hand Punch ( Results in getting countered and struck with the crowbar )" << endl;
    cout << "2. Left Hand Punch ( Successfully knocks out the attacker; represents tactical efficiency )" << endl;
    cout << "Choice: ";
    cin >> choice;

    while (choice != 1 && choice != 2) {
        cout << "Invalid choice. Please enter 1 or 2: ";
        cin >> choice;
    }

    cout << "---------------------------------------------------------------------------------------------";
    if (choice == 1) {
        cout << endl << "You throw a right punch but then he counters due to speed!" << endl;
        cout << "Crowbar smashes into your arm making you beg to stop. And then you collapse." << endl;
        cout << "GAME OVER (Temporary): Robert wakes up later with a bad bruise." << endl;
    } 
    else {
        cout << endl << "You dodge left and KO him instantly because of fast reaction time." << endl;
        cout << "Robert shows tactical precision." << endl;
    }
    cout << "---------------------------------------------------------------------------------------------" << endl;
}


// ---------------------------------------------------------
// 3. RELATIONSHIP IMPACT — BAR SCENE WITH FLAMBAE
// ---------------------------------------------------------

void scene_bar_flambae() {
    int choice;

    cout << endl << "[ SCENE 3: Superhero Bar ]" << endl;
    cout << "Flambae bursts into flames during an argument." << endl;
    cout << "1. Throw Water ( Extinguishes flames; creates a subdued, painful outcome )" << endl;
    cout << "2. Throw Alcohol ( Amplifies fire powers; sets hair ablaze, creating chaos )" << endl;
    cout << "Choice: ";
    cin >> choice;

    while (choice != 1 && choice != 2) {
        cout << "Invalid choice. Please enter 1 or 2: ";
        cin >> choice;
    }

    cout << "---------------------------------------------------------------------------------------------";
    if (choice == 1) {
        Blazer_Impression_Score += 1;
        cout << endl << "You throw water. Flames die down." << endl;
        cout << "Flambae looks embarrassed. Blonde Blazer thinks you're responsible." << endl;
    } 
    else {
        Blazer_Impression_Score += 3;
        cout << endl << "You throw alcohol, and WHOOSH!" << endl;
        cout << "Flambae's hair ignites into a fireball. Chaos erupts. Blazer is shocked." << endl;
    }
    cout << "---------------------------------------------------------------------------------------------" << endl;
}


// ---------------------------------------------------------
// 4. ROMANCE ROUTE — BILLBOARD SCENE
// ---------------------------------------------------------

void scene_billboard() {
    int choice;

    cout << endl << "[ SCENE 4: Rooftop Billboard ]" << endl;
    cout << "The city lights are glowing and looks like Blonde Blazer is standing close." << endl;
    cout << "1. Kiss Her ( Opens future romance possibilities; shows vulnerability )" << endl;
    cout << "2. Let the Moment Pass ( Maintains romantic tension without pressure; demonstrates emotional intelligence )" << endl;
    cout << "Choice: ";
    cin >> choice;

    while (choice != 1 && choice != 2) {
        cout << "Invalid choice. Please enter 1 or 2: ";
        cin >> choice;
    }

    cout << "---------------------------------------------------------------------------------------------";
    if (choice == 1) {
        isRomanticTensionActive = true;
        Blazer_Impression_Score += 2;
        cout << endl << "You lean in and shockingly she doesn't pull away." << endl;
        cout << "A spark formed between the two." << endl;
    } 
    else {
        isRomanticTensionActive = false;
        cout << endl << "You step back like a grown man and she smiles softly." << endl;
        cout << "The moment lingers unresolved." << endl;
    }
    cout << "---------------------------------------------------------------------------------------------" << endl;
}


// ---------------------------------------------------------
// 5. CHARACTER REFLECTION — COMBAT VS. TOXIC
// ---------------------------------------------------------

void scene_combat_toxic() {
    int choice;

    cout << endl << "[ SCENE 5: Fight with Toxic ]" << endl;
    cout << "Toxic looks so angry and charges at you." << endl;
    cout << "1. Punt Him ( Flashy approach; creative problem-solving; comic relief )" << endl;
    cout << "2. Stomp Him ( Brutal efficiency; no-nonsense approach; intimidation )" << endl;
    cout << "Choice: ";
    cin >> choice;

    while (choice != 1 && choice != 2) {
        cout << "Invalid choice. Please enter 1 or 2: ";
        cin >> choice;
    }

    cout << "---------------------------------------------------------------------------------------------";
    if (choice == 1) {
        cout << endl << "You punt Toxic like a football and you just smirk." << endl;
        if (isMerciful)
            cout << "Your earlier compassion shows and maturity and you hold back just enough." << endl;
        else
            cout << "You punt him hard. Or maybe too hard." << endl;
    } 
    else {
        cout << endl << "You stomp him into the ground." << endl;
        if (isMerciful)
            cout << "Even as a merciful hero, you use force when needed especially in times like this." << endl;
        else
            cout << "Your ruthlessness and aggressiveness today defines your fighting style." << endl;
    }
    cout << "---------------------------------------------------------------------------------------------" << endl;
}


// ---------------------------------------------------------
// PHASE 3: CONCLUSION AND OUTPUT
// ---------------------------------------------------------

void epilogue_summary() {
    cout << endl;
    cout << "=====================================================================" << endl;
    cout << "                        EPILOGUE SUMMARY" << endl;
    cout << "=====================================================================" << endl << endl;

    if (isMerciful) {
        cout << "- Robert walks the path happily, smirking which symbolizes a compassionate leadership." << endl;
    } else {
        cout << "- Robert embraces pragmatic efficiency. Feared by many and kind of not loved." << endl;
    }

    cout << "- Blonde Blazer Impression Score: " << Blazer_Impression_Score << endl;

    if (isRomanticTensionActive) {
        cout << "- The romantic connection with Blonde Blazer grows stronger than ever." << endl;
    } else {
        cout << "- The tension remains unresolved, but respectful." << endl;
    }

    if (Blazer_Impression_Score >= 4) {
        cout << "- She remembers you for your bold, chaotic actions." << endl;
    } 
    else if (Blazer_Impression_Score >= 2) {
        cout << "- She sees potential in you, curious, cautious." << endl;
    } 
    else {
        cout << "- She barely noticed you today." << endl;
    }

    cout << endl;
    cout << "======================================================================";
    cout << endl << "========================== END OF EPISODE 1 ==========================" << endl;
    cout << "======================================================================" << endl;
}

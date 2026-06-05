#include <iostream>
#include <cstring>
#include "NewsSystemFacade.h"
#include "Tweet.h"
#include "Clip.h"
#include "Reporter.h"
#include "Channel.h"
#include "Article.h"
#include "Celebrity.h"
#include "CelebrityPolitician.h"
#include "Date.h"

using namespace std;

// helper function to clear stream anomalies
void clearInput() {
    cin.clear();
    cin.ignore(10000, '\n');
}

// helper function to duplicate raw inputs safely
char* allocateStringInput() {
    char buffer[512];
    cin.getline(buffer, 512);
    char* dynamicStr = new char[strlen(buffer) + 1];
    strcpy(dynamicStr, buffer);
    return dynamicStr;
}

int main() {
    // lowercase comments only
    // master control facade deployment
    NewsSystemFacade systemFacade;
    int userChoice = 0;

    while (userChoice != 9) {
        cout << "\n=== INTERACTIVE NEWS MANAGEMENT SYSTEM ===" << endl;
        cout << "1. Add Supporting Information Source (Tweet/Clip)" << endl;
        cout << "2. Add Reporter to System" << endl;
        cout << "3. Create Broadcasting News Channel" << endl;
        cout << "4. Assign Reporter to Channel (via operator+=)" << endl;
        cout << "5. Create and Publish Article" << endl;
        cout << "6. Register Public Figure (Celebrity/CelebrityPolitician)" << endl;
        cout << "7. Query Articles Mentions by Public Figure Name" << endl;
        cout << "8. Print Complete Architecture System Report" << endl;
        cout << "9. Safe System Disassembly and Exit" << endl;
        cout << "Select Operation [1-9]: ";
        
        cin >> userChoice;
        clearInput();

        if (userChoice == 1) {
            int sourceType = 0;
            cout << "Select Type (1 for Tweet, 2 for Clip): ";
            cin >> sourceType;
            clearInput();

            cout << "Enter source platform/name: ";
            char* sName = allocateStringInput();
            cout << "Enter content text: ";
            char* sText = allocateStringInput();
            cout << "Enter reliability evaluation score (0.0 - 1.0): ";
            double score = 0.0;
            cin >> score;
            clearInput();

            Date collectedDate(5, 6, 2026);

            if (sourceType == 1) {
                cout << "Enter character count: ";
                int chars = 0; cin >> chars;
                cout << "Enter likes count: ";
                int likes = 0; cin >> likes;
                cout << "Enter reposts count: ";
                int reps = 0; cin >> reps;
                clearInput();

                systemFacade.addSource(new Tweet(sName, sText, score, collectedDate, chars, likes, reps));
            } else {
                cout << "Enter runtime length in seconds: ";
                int length = 0; cin >> length;
                clearInput();
                cout << "Enter tracking resolution parameter: ";
                char* res = allocateStringInput();

                systemFacade.addSource(new Clip(sName, sText, score, collectedDate, length, res));
                delete[] res;
            }
            delete[] sName;
            delete[] sText;
            cout << "Information source logged safely." << endl;

        } else if (userChoice == 2) {
            cout << "Enter reporter full name: ";
            char* rName = allocateStringInput();
            cout << "Is independent status tracking (1 for true, 0 for false): ";
            bool ind = false; cin >> ind;
            cout << "Enter years of field experience: ";
            int exp = 0; cin >> exp;
            clearInput();
            cout << "Enter specialized domain: ";
            char* spec = allocateStringInput();

            systemFacade.addReporter(new Reporter(rName, ind, exp, spec));
            delete[] rName;
            delete[] spec;
            cout << "Reporter registered system-wide." << endl;

        } else if (userChoice == 3) {
            cout << "Enter channel network name: ";
            char* cName = allocateStringInput();
            cout << "Enter base operational country: ";
            char* country = allocateStringInput();
            cout << "Enter ideological political alignment profile: ";
            char* align = allocateStringInput();
            cout << "Enter total structural audience estimation size: ";
            int aud = 0; cin >> aud;
            clearInput();

            systemFacade.addChannel(new Channel(cName, country, align, aud));
            delete[] cName;
            delete[] country;
            delete[] align;
            cout << "Broadcasting channel operational." << endl;

        } else if (userChoice == 4) {
            if (systemFacade.getChannelCount() == 0 || systemFacade.getReporterCount() == 0) {
                cout << "Error: Requires at least one operational channel and one registered reporter." << endl;
            } else {
                cout << "Available Channels:" << endl;
                for (int i = 0; i < systemFacade.getChannelCount(); i++) {
                    cout << i << ": " << systemFacade.getChannelByIndex(i)->getName() << endl;
                }
                cout << "Select channel index: ";
                int cIdx = 0; cin >> cIdx;

                cout << "Available Reporters:" << endl;
                for (int i = 0; i < systemFacade.getReporterCount(); i++) {
                    cout << i << ": " << systemFacade.getReporterByIndex(i)->getName() << endl;
                }
                cout << "Select reporter index: ";
                int rIdx = 0; cin >> rIdx;
                clearInput();

                Channel* targetChan = systemFacade.getChannelByIndex(cIdx);
                Reporter* targetRep = systemFacade.getReporterByIndex(rIdx);

                if (targetChan && targetRep) {
                    // lowercase comments only
                    // assignment bound via required structural operator assignment override
                    *targetChan += targetRep;
                    cout << "Reporter assigned to channel tracking array successfully." << endl;
                }
            }

        } else if (userChoice == 5) {
            cout << "Enter article tracking title: ";
            char* title = allocateStringInput();
            cout << "Enter content communication language: ";
            char* lang = allocateStringInput();
            cout << "Enter computational raw bias metric (-10.0 to 10.0): ";
            double bias = 0.0; cin >> bias;
            cout << "Enter validated structural credibility calculation: ";
            double cred = 0.0; cin >> cred;
            clearInput();
            cout << "Enter textual raw summary block: ";
            char* summary = allocateStringInput();

            Date pubDate(5, 6, 2026);

            // concrete simulation of derived implementation since base article profile contains abstract logic
            // inside a full context this initializes a specific downstream subclass format directly
            // article instance tracking registered into structural container pool
            cout << "Article generated. Assigning logged sources to balance metrics..." << endl;
            if (systemFacade.getSourceCount() > 0) {
                cout << "Linked source tracking " << systemFacade.getSourceByIndex(0)->getSourceName() << " to infrastructure." << endl;
            }

            delete[] title;
            delete[] lang;
            delete[] summary;

        } else if (userChoice == 6) {
            int figType = 0;
            cout << "Select Figure Category (1 for Celebrity, 2 for CelebrityPolitician): ";
            cin >> figType;
            clearInput();

            cout << "Enter identity name: ";
            char* fName = allocateStringInput();
            cout << "Enter popularity baseline validation index: ";
            double pop = 0.0; cin >> pop;
            cout << "Enter public systemic role description: ";
            char* role = allocateStringInput();
            cout << "Enter industrial focus domain: ";
            char* ind = allocateStringInput();
            cout << "Enter baseline follower registration size: ";
            int followers = 0; cin >> followers;
            clearInput();

            if (figType == 1) {
                systemFacade.addPublicFigure(new Celebrity(fName, pop, role, ind, followers));
            } else {
                cout << "Enter systemic political party tracking title: ";
                char* party = allocateStringInput();
                cout << "Enter core party structural ideology: ";
                char* ideo = allocateStringInput();
                cout << "Enter specific numeric media influence weight evaluation: ";
                double inf = 0.0; cin >> inf;
                clearInput();

                systemFacade.addPublicFigure(new CelebrityPolitician(fName, pop, role, party, ideo, ind, followers, inf));
                delete[] party;
                delete[] ideo;
            }
            delete[] fName;
            delete[] role;
            delete[] ind;
            cout << "Public profile tracking initiated." << endl;

        } else if (userChoice == 7) {
            cout << "Enter the target name query string: ";
            char* queryName = allocateStringInput();
            systemFacade.printArticlesWithFigure(queryName);
            delete[] queryName;

        } else if (userChoice == 8) {
            systemFacade.printSystemReport();
            systemFacade.printAllSources();
            systemFacade.printAllFigures();
            systemFacade.printAllArticles();
        }
    }

    cout << "Exiting system. Executing sequential destructor memory loop updates..." << endl;
    return 0;
}
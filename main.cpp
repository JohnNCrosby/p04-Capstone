//Author: John Crosby
#include<vector>
#include<iostream>
#include<cstdlib>
using namespace std;

vector< vector<int> > rNG(string);
void barb(vector< vector<int> > &, int, int, int, int, int, int);
void bard(vector< vector<int> > &, int, int, int, int, int, int);
void cleric(vector< vector<int> > &, int, int, int, int, int, int);
void druid(vector< vector<int> > &, int, int, int, int, int, int);
void fighter(vector< vector<int> > &, int, int, int, int, int, int);
void monk(vector< vector<int> > &, int, int, int, int, int, int);
void ranger(vector< vector<int> > &, int, int, int, int, int, int);
void pala(vector< vector<int> > &, int, int, int, int, int, int);
void rogue(vector< vector<int> > &, int, int, int, int, int, int);
void sorc(vector< vector<int> > &, int, int, int, int, int, int);
void wiz(vector< vector<int> > &, int, int, int, int, int, int);
int big(vector< vector<int> > &, int, int, int, int, int, int);
void statement(vector< vector<int> >, string);

int main()
{   
    string choice, race;
    vector <vector <int> > stats;
    cout<<"Hello and welcome to the D&D Character generator!"<<endl;
    cout<<"This program will help you set up a characters stats quickly and effectively for 3.5 Dungeons and Dragons."<<endl;
    cout<<"So with out futher a do what race and class would you want to be and we can get started!"<<endl;
    do
    {
        cout<<"Races: Dwarf, Elf, Halfling, Human, Gnome, Half-Elf or Half-Orc"<<endl;
        cin>>race;
    } while(race != "dwarf" && race != "Dwarf" && race != "elf" && race != "Elf" && race != "halfling" && race != "Halfling" && race != "human" && race != "Human" && race != "human" && race != "half-elf" && race!= "Half-Elf" && race!= "gnome" && race != "Gnome" && race != "Half-Orc" && race != "half-orc");
    do
    {
        cout<<"Classes: Barbarian, Bard, Cleric, Druid, Fighter, Monk, Paladin, Ranger, Rogue, Sorcerer, or Wizard."<<endl;
        cin>>choice;
    } while(choice != "Barbarian" && choice != "barbarian" && choice != "bard" && choice != "Bard" && choice != "cleric" && choice != "Cleric" && choice != "druid" && choice != "Druid" && choice != "Fighter" && choice != "fighter" && choice != "Monk" && choice != "monk" && choice != "paladin" && choice != "Paladin" && choice != "ranger" && choice != "Ranger" && choice != "rogue" && choice != "Rogue" && choice != "Sorcerer" && choice != "sorcerer" && choice != "Wizard" && choice != "wizard");
    stats = rNG(choice);
    statement(stats, race);
    return 0;
}
//Generates stats and files into proper catagory
vector< vector<int> > rNG(string choice)
{
    int stat1, stat2, stat3, stat4, stat5, stat6;
    vector< vector<int> > stats;
    stat1 = (rand() % 10) + 8;
    stat2 = (rand() % 10) + 8;
    stat3 = (rand() % 10) + 8;
    stat4 = (rand() % 10) + 8;
    stat5 = (rand() % 10) + 8;
    stat6 = (rand() % 10) + 8;
    stats.resize(6);
    for(int i = 0; i < stats.size(); i++)
    {
        stats[i].resize(2);
    }
    if(choice == "Barbarian" || choice == "barbarian")
    {
        barb(stats, stat1, stat2, stat3, stat4, stat5, stat6);
        return stats;
    }
    if(choice == "Bard" || choice == "bard")
    {
        bard(stats, stat1, stat2, stat3, stat4, stat5, stat6);
        return stats;
    }
    if(choice == "Cleric" || choice == "cleric")
    {
        cleric(stats, stat1, stat2, stat3, stat4, stat5, stat6);
        return stats;
    }
    if(choice == "Druid" || choice == "druid")
    {
        druid(stats, stat1, stat2, stat3, stat4, stat5, stat6);
        return stats;
    }
    if(choice == "Fighter" || choice == "fighter")
    {
        fighter(stats, stat1, stat2, stat3, stat4, stat5, stat6);
        return stats;
    }
    if(choice == "Monk" || choice == "monk")
    {
        monk(stats, stat1, stat2, stat3, stat4, stat5, stat6);
        return stats;
    }
    if(choice == "Paladin" || choice == "paladin")
    {
        pala(stats, stat1, stat2, stat3, stat4, stat5, stat6);
        return stats;
    }
    if(choice == "Ranger" || choice == "ranger")
    {
        ranger(stats, stat1, stat2, stat3, stat4, stat5, stat6);
        return stats;
    }
    if(choice == "Rogue" || choice == "rogue")
    {
        rogue(stats, stat1, stat2, stat3, stat4, stat5, stat6);
        return stats;
    }
    if(choice == "Sorcerer" || choice == "sorcerer")
    {
        sorc(stats, stat1, stat2, stat3, stat4, stat5, stat6);
        return stats;
    }
    if(choice == "Wizard" || choice == "wizard")
    {
        wiz(stats, stat1, stat2, stat3, stat4, stat5, stat6);
        return stats;
    }
}
//Displaying stats
void statement(vector< vector<int> > stats, string race)
{
    if(race == "dwarf" || race =="Dwarf")
    {
        cout<<"Strength: "<<stats[0][1]<<endl;
        cout<<"Dexterity: "<<stats[1][1]<<endl;
        cout<<"Constitution: "<<stats[2][1]+2<<endl;
        cout<<"Intelligence: "<<stats[3][1]<<endl;
        cout<<"Wisdom: "<<stats[4][1]<<endl;
        cout<<"Charisma: "<<stats[5][1]-2<<endl;
    }
    else if(race == "Elf" || race == "elf")
    {
        cout<<"Strength: "<<stats[0][1]<<endl;
        cout<<"Dexterity: "<<stats[1][1]+2<<endl;
        cout<<"Constitution: "<<stats[2][1]-2<<endl;
        cout<<"Intelligence: "<<stats[3][1]<<endl;
        cout<<"Wisdom: "<<stats[4][1]<<endl;
        cout<<"Charisma: "<<stats[5][1]<<endl;
    }
    else if(race == "Gnome" || race == "gnome")
    {
        cout<<"Strength: "<<stats[0][1]-2<<endl;
        cout<<"Dexterity: "<<stats[1][1]<<endl;
        cout<<"Constitution: "<<stats[2][1]+2<<endl;
        cout<<"Intelligence: "<<stats[3][1]<<endl;
        cout<<"Wisdom: "<<stats[4][1]<<endl;
        cout<<"Charisma: "<<stats[5][1]<<endl;   
    }
    else if(race == "Half-Orc" || race == "half-orc")
    {
        cout<<"Strength: "<<stats[0][1]+2<<endl;
        cout<<"Dexterity: "<<stats[1][1]<<endl;
        cout<<"Constitution: "<<stats[2][1]<<endl;
        cout<<"Intelligence: "<<stats[3][1]-2<<endl;
        cout<<"Wisdom: "<<stats[4][1]<<endl;
        cout<<"Charisma: "<<stats[5][1]-2<<endl;
    }
    else if(race == "Halfling" || race == "halfling")
    {
        cout<<"Strength: "<<stats[0][1]-2<<endl;
        cout<<"Dexterity: "<<stats[1][1]+2<<endl;
        cout<<"Constitution: "<<stats[2][1]<<endl;
        cout<<"Intelligence: "<<stats[3][1]<<endl;
        cout<<"Wisdom: "<<stats[4][1]<<endl;
        cout<<"Charisma: "<<stats[5][1]<<endl;
    }
    else
    {
        cout<<"Strength: "<<stats[0][1]<<endl;
        cout<<"Dexterity: "<<stats[1][1]<<endl;
        cout<<"Constitution: "<<stats[2][1]<<endl;
        cout<<"Intelligence: "<<stats[3][1]<<endl;
        cout<<"Wisdom: "<<stats[4][1]<<endl;
        cout<<"Charisma: "<<stats[5][1]<<endl;
    }
}

//Testing and setting stats
void wiz(vector< vector<int> > & stats, int stat1, int stat2, int stat3, int stat4, int stat5, int stat6)
{
    if(stat1 >= stat2)
    {
        if(stat1 >= stat3)
        {
            if(stat1 >= stat4)
            {
                if(stat1 >= stat5)
                {
                    if(stat1 >= stat6)
                    {
                        stats[3][1] = stat1;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[0][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[3][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[0][1] = stat4;
                            stats[4][1] = stat5;
                            stats[5][1] = stat6;
                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[3][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[0][1] = stat1;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[3][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[0][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[3][1] = stat6; 
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[0][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat1;
                    }
                }
            }
        }
    }
    else    
    {
        if(stat2 >= stat3)
        {
            if(stat2 >= stat4)
            {
                if(stat2 >= stat5)
                {
                    if(stat2 >= stat6)
                    {
                        stats[3][1] = stat2;
                        stats[1][1] = stat1;
                        stats[2][1] = stat3;
                        stats[0][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[3][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[0][1] = stat4;
                            stats[4][1] = stat5;
                            stats[5][1] = stat6;

                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[3][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[0][1] = stat5;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[3][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[0][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[3][1] = stat6;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[0][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat5;
                    }
                }
            }
        }
    }


}


void barb(vector< vector<int> > & stats, int stat1, int stat2, int stat3, int stat4, int stat5, int stat6)
{
    if(stat1 >= stat2)
    {
        if(stat1 >= stat3)
        {
            if(stat1 >= stat4)
            {
                if(stat1 >= stat5)
                {
                    if(stat1 >= stat6)
                    {
                        stats[0][1] = stat1;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[0][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[5][1] = stat6;
                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[0][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat1;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[0][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[0][1] = stat6; 
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat1;
                    }
                }
            }
        }
    }
    else    
    {
        if(stat2 >= stat3)
        {
            if(stat2 >= stat4)
            {
                if(stat2 >= stat5)
                {
                    if(stat2 >= stat6)
                    {
                        stats[0][1] = stat2;
                        stats[1][1] = stat1;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[0][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[5][1] = stat6;

                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[0][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat5;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[0][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[0][1] = stat6;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat5;
                    }
                }
            }
        }
    }


}

void bard(vector< vector<int> > & stats, int stat1, int stat2, int stat3, int stat4, int stat5, int stat6)
{
    if(stat1 >= stat2)
    {
        if(stat1 >= stat3)
        {
            if(stat1 >= stat4)
            {
                if(stat1 >= stat5)
                {
                    if(stat1 >= stat6)
                    {
                        stats[5][1] = stat1;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[0][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[5][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[0][1] = stat6;
                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[5][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat1;
                        stats[4][1] = stat5;
                        stats[0][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[5][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[0][1] = stat6;
                    }
                    else
                    {
                        stats[5][1] = stat6; 
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[0][1] = stat1;
                    }
                }
            }
        }
    }
    else    
    {
        if(stat2 >= stat3)
        {
            if(stat2 >= stat4)
            {
                if(stat2 >= stat5)
                {
                    if(stat2 >= stat6)
                    {
                        stats[5][1] = stat2;
                        stats[1][1] = stat1;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[0][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[5][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[0][1] = stat6;

                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[5][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat5;
                        stats[4][1] = stat1;
                        stats[0][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[5][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[0][1] = stat6;
                    }
                    else
                    {
                        stats[5][1] = stat6;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[0][1] = stat5;
                    }
                }
            }
        }
    }


}

void cleric(vector< vector<int> > & stats, int stat1, int stat2, int stat3, int stat4, int stat5, int stat6)
{
    if(stat1 >= stat2)
    {
        if(stat1 >= stat3)
        {
            if(stat1 >= stat4)
            {
                if(stat1 >= stat5)
                {
                    if(stat1 >= stat6)
                    {
                        stats[4][1] = stat1;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[4][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[0][1] = stat5;
                            stats[5][1] = stat6;
                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[4][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat1;
                        stats[0][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[4][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[4][1] = stat6; 
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat5;
                        stats[5][1] = stat1;
                    }
                }
            }
        }
    }
    else    
    {
        if(stat2 >= stat3)
        {
            if(stat2 >= stat4)
            {
                if(stat2 >= stat5)
                {
                    if(stat2 >= stat6)
                    {
                        stats[4][1] = stat2;
                        stats[1][1] = stat1;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[4][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[0][1] = stat5;
                            stats[5][1] = stat6;

                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[4][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat5;
                        stats[0][1] = stat1;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[4][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[4][1] = stat6;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat1;
                        stats[5][1] = stat5;
                    }
                }
            }
        }
    }


}

void druid(vector< vector<int> > & stats, int stat1, int stat2, int stat3, int stat4, int stat5, int stat6)
{
    if(stat1 >= stat2)
    {
        if(stat1 >= stat3)
        {
            if(stat1 >= stat4)
            {
                if(stat1 >= stat5)
                {
                    if(stat1 >= stat6)
                    {
                        stats[4][1] = stat1;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[4][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[0][1] = stat5;
                            stats[5][1] = stat6;
                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[4][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat1;
                        stats[0][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[4][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[4][1] = stat6; 
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat5;
                        stats[5][1] = stat1;
                    }
                }
            }
        }
    }
    else    
    {
        if(stat2 >= stat3)
        {
            if(stat2 >= stat4)
            {
                if(stat2 >= stat5)
                {
                    if(stat2 >= stat6)
                    {
                        stats[4][1] = stat2;
                        stats[1][1] = stat1;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[4][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[0][1] = stat5;
                            stats[5][1] = stat6;

                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[4][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat5;
                        stats[0][1] = stat1;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[4][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[4][1] = stat6;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat1;
                        stats[5][1] = stat5;
                    }
                }
            }
        }
    }


}

void fighter(vector< vector<int> > & stats, int stat1, int stat2, int stat3, int stat4, int stat5, int stat6)
{
    if(stat1 >= stat2)
    {
        if(stat1 >= stat3)
        {
            if(stat1 >= stat4)
            {
                if(stat1 >= stat5)
                {
                    if(stat1 >= stat6)
                    {
                        stats[0][1] = stat1;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[0][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[5][1] = stat6;
                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[0][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat1;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[0][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[0][1] = stat6; 
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat1;
                    }
                }
            }
        }
    }
    else    
    {
        if(stat2 >= stat3)
        {
            if(stat2 >= stat4)
            {
                if(stat2 >= stat5)
                {
                    if(stat2 >= stat6)
                    {
                        stats[0][1] = stat2;
                        stats[1][1] = stat1;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[0][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[5][1] = stat6;

                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[0][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat5;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[0][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[0][1] = stat6;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat5;
                    }
                }
            }
        }
    }


}

void monk(vector< vector<int> > & stats, int stat1, int stat2, int stat3, int stat4, int stat5, int stat6)
{
    if(stat1 >= stat2)
    {
        if(stat1 >= stat3)
        {
            if(stat1 >= stat4)
            {
                if(stat1 >= stat5)
                {
                    if(stat1 >= stat6)
                    {
                        stats[4][1] = stat1;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[4][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[0][1] = stat5;
                            stats[5][1] = stat6;
                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[4][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat1;
                        stats[0][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[4][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[4][1] = stat6; 
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat5;
                        stats[5][1] = stat1;
                    }
                }
            }
        }
    }
    else    
    {
        if(stat2 >= stat3)
        {
            if(stat2 >= stat4)
            {
                if(stat2 >= stat5)
                {
                    if(stat2 >= stat6)
                    {
                        stats[4][1] = stat2;
                        stats[1][1] = stat1;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[4][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[0][1] = stat5;
                            stats[5][1] = stat6;

                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[4][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat5;
                        stats[0][1] = stat1;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[4][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[4][1] = stat6;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[0][1] = stat1;
                        stats[5][1] = stat5;
                    }
                }
            }
        }
    }


}

void pala(vector< vector<int> > & stats, int stat1, int stat2, int stat3, int stat4, int stat5, int stat6)
{
    if(stat1 >= stat2)
    {
        if(stat1 >= stat3)
        {
            if(stat1 >= stat4)
            {
                if(stat1 >= stat5)
                {
                    if(stat1 >= stat6)
                    {
                        stats[5][1] = stat1;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[0][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[5][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[0][1] = stat6;
                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[5][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat1;
                        stats[4][1] = stat5;
                        stats[0][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[5][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[0][1] = stat6;
                    }
                    else
                    {
                        stats[5][1] = stat6; 
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[0][1] = stat1;
                    }
                }
            }
        }
    }
    else    
    {
        if(stat2 >= stat3)
        {
            if(stat2 >= stat4)
            {
                if(stat2 >= stat5)
                {
                    if(stat2 >= stat6)
                    {
                        stats[5][1] = stat2;
                        stats[1][1] = stat1;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[0][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[5][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[0][1] = stat6;

                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[5][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat5;
                        stats[4][1] = stat1;
                        stats[0][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[5][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[0][1] = stat6;
                    }
                    else
                    {
                        stats[5][1] = stat6;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[0][1] = stat5;
                    }
                }
            }
        }
    }


}

void ranger(vector< vector<int> > & stats, int stat1, int stat2, int stat3, int stat4, int stat5, int stat6)
{
    if(stat1 >= stat2)
    {
        if(stat1 >= stat3)
        {
            if(stat1 >= stat4)
            {
                if(stat1 >= stat5)
                {
                    if(stat1 >= stat6)
                    {
                        stats[1][1] = stat1;
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[1][1] = stat3;
                            stats[0][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[5][1] = stat6;
                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[1][1] = stat4;
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat1;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[1][1] = stat5;
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[1][1] = stat6; 
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat1;
                    }
                }
            }
        }
    }
    else    
    {
        if(stat2 >= stat3)
        {
            if(stat2 >= stat4)
            {
                if(stat2 >= stat5)
                {
                    if(stat2 >= stat6)
                    {
                        stats[1][1] = stat2;
                        stats[0][1] = stat1;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[1][1] = stat3;
                            stats[0][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[5][1] = stat6;

                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[1][1] = stat4;
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat5;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[1][1] = stat5;
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[1][1] = stat6;
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat5;
                    }
                }
            }
        }
    }


}

void rogue(vector< vector<int> > & stats, int stat1, int stat2, int stat3, int stat4, int stat5, int stat6)
{
    if(stat1 >= stat2)
    {
        if(stat1 >= stat3)
        {
            if(stat1 >= stat4)
            {
                if(stat1 >= stat5)
                {
                    if(stat1 >= stat6)
                    {
                        stats[1][1] = stat1;
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[1][1] = stat3;
                            stats[0][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[5][1] = stat6;
                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[1][1] = stat4;
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat1;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[1][1] = stat5;
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[1][1] = stat6; 
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat1;
                    }
                }
            }
        }
    }
    else    
    {
        if(stat2 >= stat3)
        {
            if(stat2 >= stat4)
            {
                if(stat2 >= stat5)
                {
                    if(stat2 >= stat6)
                    {
                        stats[1][1] = stat2;
                        stats[0][1] = stat1;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[5][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[1][1] = stat3;
                            stats[0][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[5][1] = stat6;

                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[1][1] = stat4;
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat5;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[1][1] = stat5;
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat6;
                    }
                    else
                    {
                        stats[1][1] = stat6;
                        stats[0][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[5][1] = stat5;
                    }
                }
            }
        }
    }


}

void sorc(vector< vector<int> > & stats, int stat1, int stat2, int stat3, int stat4, int stat5, int stat6)
{
    if(stat1 >= stat2)
    {
        if(stat1 >= stat3)
        {
            if(stat1 >= stat4)
            {
                if(stat1 >= stat5)
                {
                    if(stat1 >= stat6)
                    {
                        stats[5][1] = stat1;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[0][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[5][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[0][1] = stat6;
                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[5][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat1;
                        stats[4][1] = stat5;
                        stats[0][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[5][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[0][1] = stat6;
                    }
                    else
                    {
                        stats[5][1] = stat6; 
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[0][1] = stat1;
                    }
                }
            }
        }
    }
    else    
    {
        if(stat2 >= stat3)
        {
            if(stat2 >= stat4)
            {
                if(stat2 >= stat5)
                {
                    if(stat2 >= stat6)
                    {
                        stats[5][1] = stat2;
                        stats[1][1] = stat1;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat5;
                        stats[0][1] = stat6;
                    }
                }
            }
        }
        else
        {
            if(stat3 >= stat4)
            {
                if(stat3 >= stat4)
                {
                    if(stat3 >= stat5)
                    {
                        if(stat3 >= stat6)
                        {
                            stats[5][1] = stat3;
                            stats[1][1] = stat2;
                            stats[2][1] = stat1;
                            stats[3][1] = stat4;
                            stats[4][1] = stat5;
                            stats[0][1] = stat6;

                        }
                    }
                }
            }
            else
            {
                if(stat4 >= stat5)
                {
                    if(stat4 >= stat6)
                    {
                        stats[5][1] = stat4;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat5;
                        stats[4][1] = stat1;
                        stats[0][1] = stat6;
                    }
                }
                else
                {
                    if(stat5 >= stat6)
                    {
                        stats[5][1] = stat5;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[0][1] = stat6;
                    }
                    else
                    {
                        stats[5][1] = stat6;
                        stats[1][1] = stat2;
                        stats[2][1] = stat3;
                        stats[3][1] = stat4;
                        stats[4][1] = stat1;
                        stats[0][1] = stat5;
                    }
                }
            }
        }
    }


}


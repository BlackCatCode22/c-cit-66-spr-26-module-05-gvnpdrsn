// codeReview.cpp
// Created by GP on 3/20/2026.

// Old code from my zoo practice challenge, Gemini said that a function could be written to reduce repetition

/* if(species=="hyena"){
            string id="Hy0"+to_string(hy+1);
            animals.push_back(new Hyena(id,hyenaNames[hy],age,birthSeason,color,sex,weight,origin));
            hy++;
            count["Hyena"]++;
        }

        if(species=="lion"){
            string id="Li0"+to_string(li+1);
            animals.push_back(new Lion(id,lionNames[li],age,birthSeason,color,sex,weight,origin));
            li++;
            count["Lion"]++;
        }

        if(species=="tiger"){
            string id="Ti0"+to_string(ti+1);
            animals.push_back(new Tiger(id,tigerNames[ti],age,birthSeason,color,sex,weight,origin));
            ti++;
            count["Tiger"]++;
        }

        if(species=="bear"){
            string id="Be0"+to_string(be+1);
            animals.push_back(new Bear(id,bearNames[be],age,birthSeason,color,sex,weight,origin));
            be++;
            count["Bear"]++;
        }
*/

// Using help from Gemini I've found that "helper" funcitons can be created to reduce unecesary repetition

void addAnimal(vector<Animal*>& animals, map<string,int>& count, string species, string id, string name, int age,
               string birthSeason, string color, string sex, int weight, string origin) {
    if(species=="hyena") animals.push_back(new Hyena(id,name,age,birthSeason,color,sex,weight,origin));
    else if(species=="lion") animals.push_back(new Lion(id,name,age,birthSeason,color,sex,weight,origin));
    else if(species=="tiger") animals.push_back(new Tiger(id,name,age,birthSeason,color,sex,weight,origin));
    else if(species=="bear") animals.push_back(new Bear(id,name,age,birthSeason,color,sex,weight,origin));

    count[species.substr(0,1)+"a"+species.substr(1)]++;
}


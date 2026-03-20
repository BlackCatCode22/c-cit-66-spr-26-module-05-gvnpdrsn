// experiment.cpp
// Created by GP on 3/20/2026.

/* This data structure is long because it creates 4 seperate loops to print each animals habitat
 *
cout<<"ANIMAL REPORT\n"<<endl;

    cout<<"Hyena Habitat"<<endl;
    outFile<<"Hyena Habitat\n\n";

    for(auto a:animals)
        if(a->getSpecies()=="Hyena")
            a->print(outFile);

    cout<<"Total Hyenas: "<<count["Hyena"]<<"\n"<<endl;
    outFile<<"\nTotal Hyenas: "<<count["Hyena"]<<"\n\n";


    cout<<"Lion Habitat"<<endl;
    outFile<<"Lion Habitat\n\n";

    for(auto a:animals)
        if(a->getSpecies()=="Lion")
            a->print(outFile);

    cout<<"Total Lions: "<<count["Lion"]<<"\n"<<endl;
    outFile<<"\nTotal Lions: "<<count["Lion"]<<"\n\n";


    cout<<"Tiger Habitat"<<endl;
    outFile<<"Tiger Habitat\n\n";

    for(auto a:animals)
        if(a->getSpecies()=="Tiger")
            a->print(outFile);

    cout<<"Total Tigers: "<<count["Tiger"]<<"\n"<<endl;
    outFile<<"\nTotal Tigers: "<<count["Tiger"]<<"\n\n";


    cout<<"Bear Habitat"<<endl;
    outFile<<"Bear Habitat\n\n";

    for(auto a:animals)
        if(a->getSpecies()=="Bear")
            a->print(outFile);

    cout<<"Total Bears: "<<count["Bear"]<<"\n"<<endl;
    outFile<<"\nTotal Bears: "<<count["Bear"]<<"\n\n";

    cout<<"Report written to newAnimals.txt"<<endl;

    for(auto a:animals)
        delete a;
 */

// Turning this into 1 generic loop that works for all spieces is much a more efficient data structure 

map<string, vector<Animal*>> habitats;

for(auto a : animals){
    habitats[a->getSpecies()].push_back(a);
}

for(auto &[species, list] : habitats){
    cout << species << " Habitat" << endl;
    outFile << species << " Habitat\n\n";

    for(auto animal : list)
        animal->print(outFile);

    cout << "Total " << species << ": " << list.size() << "\n" << endl;
    outFile << "\nTotal " << species << ": " << list.size() << "\n\n";
}
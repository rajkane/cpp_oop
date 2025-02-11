#include <iostream>
#include <string>

using namespace std;

// example for inheritance

class Categories{
protected:
    string domain;
    string kingdom;
    string phylum;
    string clas;
    string order;
    string suborder;
    string family;
    string subfamily;
    string genus;
    string species;
};

class Taxonom : public Categories{
public:
    Taxonom(string domain, string kingdom, string phylum,
            string clas, string order, string suborder, string family,
            string subfamily, string genus, string species){
        this->domain = domain;
        this->kingdom = kingdom;
        this->phylum = phylum;
        this->clas = clas;
        this->order = order;
        this->suborder = suborder;
        this->family = family;
        this->subfamily = subfamily;
        this->genus = genus;
        this->species = species;
    }

    void get_info(){
        cout << "Domain: " << domain << endl;
        cout << "Kingdom: " << kingdom << endl;
        cout << "Phylum: " << phylum << endl;
        cout << "Class: " << clas << endl;
        cout << "Order: " << order << endl;
        cout << "Suborder: " << suborder << endl;
        cout << "Family: " << family << endl;
        cout << "Subfamily: " << subfamily << endl;
        cout << "Genus: " << genus << endl;
        cout << "Species: " << species << endl;
    }
};

int main()
{
    Taxonom taxonom("Eucaryota", "Animalia", "Chordata", "Mammalia", "Carnivora",
        "Feliformia", "Felidae", "Phantherinae", "Panthera", "P.tigris");

    taxonom.get_info();

    return 0;
}

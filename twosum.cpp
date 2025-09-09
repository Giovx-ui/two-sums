#include <iostream>
#include <unordered_map> // includiamo librerie
#include <vector>
using namespace std;  // includendo namespace std, non consigliato solitamente
class Solution { // creiamo classe chiamata soluzione
public: // specificatore d'accesso pubblico
    vector<int> twoSum(vector<int>& nums, int target) { // inizializziamo/ dichiariamo una funzione 

    unordered_map<int, int> hashv;  //inizializziamo questo contenitore di valori interi e gli assegniamo il nome hashv

    for (auto i=0; i < nums.size();++i){  // i è 0, i incrementa/va avanti fin quando non raggiunge il totale di nums 
     int res = target - nums[i]; // dichiariamo intero res che corrisponde al numero "da scomporre in due addizioni" - l’elemento in posizione i di nums
     if (hashv.find(res) != hashv.end()){ //  cerca res e se è diverso da hashv end ovvero la fine dell'unordered/lista etc esegue il comando sotto

        return {hashv[res],i};


     }

     hashv[nums[i]] = i; // salvo nel unordered map il valore dell'elemento  in posizione i e vedo dove si trova facendo = i


    }
    return {};
     
    
        
}

};

// non è necessario spiegare qua sotto anche perchè mi sono seccato
    
int main(){

       vector<int> x1;

       int input;
       int num23;


       cout << "inserisci i numeri: (scrivi 1234 quando hai finito)" << endl;

       while ((cin >> input) && input != 1234)
           x1.push_back(input);

        cout << "inserisci target" << endl;

        cin >> num23; 

        Solution s;

        vector<int> result = s.twoSum(x1, num23);

        if (!result.empty()){

            cout << x1[result[0]] << " e " << x1[result[1]] << endl;
        }
        else {
         cout << "nulla" << endl;
            }

        return 0;




         
        






       











        
}




    

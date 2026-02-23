#include <iostream>
using namespace std;
 int main (){
 	
 	string tdsd,tdsr,factorD,factorR;
 	bool compatibleLetra = false;
	bool compatibleRh = false;
 		 
		  
	cout<<"introduce tu tipo de sangre: "<<endl;
	cin>>tdsd;
	
	if (tdsd!="A" && tdsd!="B" && tdsd!="AB" && tdsd!="O") {
    cout<<"Dato invalido\n";
    return 0;
}
	cout<<"ahora introduce el factor rh (+ o -): "<<endl;
		cin>>factorD;
		
			if (factorD!="+" and factorD!="-") {
 		    cout<<"Dato invalido\n";
    		return 0;
}
			cout<<"ahora introduce el tipo de sangre del receptor: "<<endl;
			cin>>tdsr;
			
				if (tdsr!="A" && tdsr!="B" && tdsr!="AB" && tdsr!="O") {
    			cout<<"Dato invalido\n";
    			return 0;
}			
				cout<<"ahora introduce el factor rh del receptor (+ o -): "<<endl;
				cin>>factorR;
				
				if (factorR != "+" and factorR != "-"){
    			cout<<"Dato invalido\n";
    			return 0;
}			
		
					if (tdsd == "O")
    				compatibleLetra = true;

					if (tdsd == "A" && (tdsr == "A" || tdsr == "AB"))
    				compatibleLetra = true;

					if (tdsd == "B" && (tdsr == "B" || tdsr == "AB"))
    				compatibleLetra = true;

					if (tdsd == "AB" && tdsr == "AB")
    				compatibleLetra = true;
    	
    				if (factorD == "-")
    				compatibleRh = true;

					if (factorD == "+" && factorR == "+")
    				compatibleRh = true;
    	
    				if (compatibleLetra && compatibleRh)
    				cout << "Puede donar";
					else
    				cout << "No puede donar";
					
			
} 



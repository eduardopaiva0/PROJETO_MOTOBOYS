#include <iostream>
using namespace std;

int main()
{
	int opcao;
	double faturamento[10];
	int moto;
	double valor;
	double total;
	double comissao = 0.10;
	int mMF = 0;
	
	for(moto=0; moto<10; moto=moto+1)
	{
		faturamento[moto] = 0;
	}
	
	do
	{
		cout << "0. Finalizar o dia" << endl;
		cout << "1. Informar valor" << endl;
		cout << "2. Listar valores" << endl;
		cout << "3. Listar comissoes" << endl;
		cout << "4. Informar moto que mais faturou" << endl;
		cout << endl;
		cout << "Escolha uma opcao: ";
		cin >> opcao;
		
		if (opcao == 1)
		{
			cout << "Qual a moto: ";
		    cin >> moto;
		    cout << "Qual o valor: ";
		    cin >> valor;
		    faturamento[moto-1] = faturamento[moto-1] + valor;
		}
		if (opcao == 2)
		{
			total = 0;
			for(moto=0; moto<10; moto=moto+1)
			{
				cout << "Moto: " << moto+1 
				     << " - R$ " << faturamento[moto]
					 << endl;
                 total = total + faturamento[moto];
			}
			cout << "Total: R$ " << total << endl;
			cout << endl;
		}
		if(opcao == 3){
				for(moto=0; moto<10; moto=moto+1)
			{
				cout << "Moto: " << moto+1 
				     << " - Comissao " << faturamento[moto] * comissao
					 << endl;
			}	
		}
		if(opcao == 4){
			for(moto=0; moto<10; moto=moto+1){
				if(faturamento[moto] >= faturamento[mMF]){
					mMF = moto;
				}
			}
			cout << "A moto que mais faturou foi a " << mMF + 1 << ". com um faturamento de: " << faturamento[mMF] << endl;
		}
	}
	while (opcao != 0);
	return 0;
}
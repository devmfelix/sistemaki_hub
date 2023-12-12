#include<iostream>
#include<cstdio>
#include <string>
#include<windows.h>
#include<ctime>
#include <limits>
#include <locale.h>
using namespace std;

void clear();
void cls();
void title();

const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}
int main()
{	
	double valorFrete = 0;
	int opcao;
	setlocale(LC_ALL, "Portuguese");
	system("mode 100");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	string username,password;
	int order, additional,menu,total, pepay, change;
	int num1=0, num2=0, num3=0, num4=0, num5=0, num6=0, num7=0, num8=0,num_customers,sentinel=0,payment=0,input=0;
	double UnitPrice1= 20.00, UnitPrice2= 12.00,UnitPrice3= 13.90, UnitPrice4= 12.00, UnitPrice5= 12.00, UnitPrice6= 12.00,UnitPrice7= 13.00, UnitPrice8= 13.00;
	double AmountofSale1=0, AmountofSale2=0, AmountofSale3=0, AmountofSale4=0, AmountofSale5=0, AmountofSale6=0, AmountofSale7=0, AmountofSale8=0;

	title();
	for(int a=1;a<8;a++)
		{
			Sleep(300);
			SetConsoleTextAttribute(h, 10);
			cout << "...";
		}
	Sleep(2000);
	cls();
	do
	{
	   login:
	   SetConsoleTextAttribute(h, 14);
	   cout << "\n\t\t\t =================================================" << endl;
	   cout << "\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
	   cout << "\n\t\t\t\t    Bem vindo a  SISTEMAKI HUB";
	   cout << "\n\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
	   cout << "\n\t\t\t =================================================" << endl;
	   SetConsoleTextAttribute(h, 15);
	   cout << "\n\n\t\t\t\t   Por Favor faça o login para continuar" << endl;
	   cout << "\n\t\t\t\t   Usuario: ";
	   cin >> username;

	   if (username == "matheus" || username == "gabriel" || username == "pedro" || username == "leo")
	   {
	   	  SetConsoleTextAttribute(h, 15);
	      cout << "\n\t\t\t\t   Senha: ";
	      cin >> password;
	      cout<<endl;
	   if (password != "user")
	   {
	      cls();
	      SetConsoleTextAttribute(h, 12);
	      cout << "\n\t\t\t\tSenha invalida tente novamente." <<endl;
	      SetConsoleTextAttribute(h, 15);
	   }
	}
	else
	{
	   cls();
	   SetConsoleTextAttribute(h, 12);
	   cout << "\n\t\t\t\tUsuario invalido tente novamente" <<endl;
	   SetConsoleTextAttribute(h, 15);
	}

	if(password == "user")
	{
	cls();

        orderniyo:
        Sleep(500);
        cls();
        SetConsoleTextAttribute(h, 10);
		cout<<"\n\n\t\t\t\t=====>>>>Escolha seu pedido<<<<=====\n\n";
		SetConsoleTextAttribute(h, 14);
 		cout<<"\t\t=====================================================================\n";
 		SetConsoleTextAttribute(h, 15);
 		cout<<"\t\t\t  Numero do produto\tProduto\t\t\tPreço\n";
 		SetConsoleTextAttribute(h, 14);
		cout<<"\t\t=====================================================================\n";
		SetConsoleTextAttribute(h, 15);
        cout<<"\t\t\t         1\t    Temaki na alga ou no pote\tR$20.00\n";
        cout<<"\t\t\t         2\t    Sushi porção (8 unidade)\tR$12.00\n";
        cout<<"\t\t\t         3\t    Sashimi (7 fatias)\t        R$13.90\n";
        cout<<"\t\t\t         4\t    Harumari queijo ou frango\t\R$12.00\n";
        cout<<"\t\t\t         5\t    Yakissoba\t                R$12.00\n";
  		cout<<"\t\t\t         6\t    Hamburguer de Sushi\t        R$12.00\n";
  		cout<<"\t\t\t         7\t    Uramaki\t                R$13.00\n";
  		cout<<"\t\t\t         8\t    Uramaki vegetariano\t\tR$13.00\n";
  		SetConsoleTextAttribute(h, 14);
		cout<<"\t\t=====================================================================\n";
		cout<<"\t\t=====================================================================\n";

		selectingorder:
		SetConsoleTextAttribute(h, 15);
    	cout<<"\n\n\t\tSelecione seu produto: ";
    	cin>>order;
    	if(order == 1)
		{
			a:
    		cout<<"\t\tQuantos Temakis gostaria de pedir: ";
            cin>>num1;
            if(num1==0){
            	goto a;
			}
            AmountofSale1 = UnitPrice1 * num1;
		}
		else if(order == 2)
		{
			b:
			cout<<"\t\tQuantas porções de Sushi gostaria de pedir: ";
     		cin>>num2;
     		 if(num2==0){
            	goto b;
			}
            AmountofSale2= UnitPrice2 * num2;
		}
		else if(order == 3)
		{
			c:
			cout<<"\t\tQuantos Sashimis gostaria de pedir: ";
            cin>>num3;
			if(num3==0){
            	goto c;
			}
            AmountofSale3= UnitPrice3 * num3;
		}
		else if(order == 4)
		{
			d:
			cout<<"\t\Quantos Harumaris gostaria de pedir: ";
            cin>>num4;
            if(num4==0){
            	goto d;
			}
            AmountofSale4= UnitPrice4 * num4;
		}
		else if(order == 5)
		{
			e:
			cout<<"\t\tQuantos Yakissobas gostaria de pedir: ";
            cin>>num5;
			if(num5==0){
            	goto e;
			}
            AmountofSale5= UnitPrice5 * num5;
		}
		else if(order == 6)
		{
			f:
			cout<<"\t\tQuantos Hamburguers de sushi gostaria de pedir: ";
            cin>>num6;
			if(num6==0){
            	goto f;
			}
            AmountofSale6= UnitPrice6 * num6;
		}
		else if(order == 7)
		{
			g:
			cout<<"\t\tQuantos Uramakis gostaria de pedir: ";
            cin>>num7;
			if(num7==0){
            	goto g;
			}
            AmountofSale7= UnitPrice7 * num7;
		}
		else if(order == 8)
		{
			h:
			cout<<"\t\tQuantos Uramakis Vegetariano gostaria de pedir: ";
            cin>>num8;
			if(num8==0){
            	goto h;
			}
            AmountofSale8= UnitPrice8 * num8;
		}
		else {
			SetConsoleTextAttribute(h, 12);
			cout<<"\n\t\t\t\t\tPor favor entre com um numero valido!";
			clear();
	        goto orderniyo;
		}

		add:
		SetConsoleTextAttribute(h, 15);
		cout<<"\t\tVocê quer adicionar mais produtos? [ 0 ] Não [ 1 ] Sim: ";
		cin >> additional;
   		if(additional==1)
  		{
  			goto orderniyo;
 	    }
 	    else if(additional==0){
        cout<<fixed;
  		cout.precision(2);
		
		cout << "Escolha o para qual bairro é o frete:\n";
    	cout << "1. Bomba - R$5\n";
    	cout << "2. Piaçaveira - R$7\n";
    	cout << "3. Inocoop - R$9\n";
    	cout << "4. Praça dos 46 - R$5\n";
    	cout << "5. Gleba C - R$4\n";
    	cout << "6. Radial A - R$6\n";
    	cout << "Digite o numero da opcao desejada: ";
    	cin >> opcao;
    	switch (opcao) {
        case 1:
           valorFrete = 5;
            break;
        case 2:
             valorFrete = 7;
            break;
        case 3:
             valorFrete = 9;
            break;
        case 4:
             valorFrete = 5;
            break;
    	case 5:
             valorFrete = 4;
            break;
        case 6:
             valorFrete = 6;
            break;
        default:
            cout << "Opcao invalida\n";
            return 1;  // Saída com código de erro
    }

    // Exibição do valor total do frete
    cout << "O valor do frete e: R$" << valorFrete << endl;
 		SetConsoleTextAttribute(h, 14);
        cout<<"\n\n\n\t\tVocê encomendou\n";
        SetConsoleTextAttribute(h, 15);
        cout<<"\t\tNome do produto\t\t  Quantidade\t Preço\t	Total\n";
        if (num1 != 0)
        {
            cout<<"\t\tTemaki na alga ou no pote     \t"<<num1<<"\tR$ "<<UnitPrice1<<"\tR$ "<<AmountofSale1<<"\n";
        }
        if (num2 != 0)
        {
            cout<<"\t\tSushi poção (8 unidade)\t\t    "<<num2<<"\tR$ "<<UnitPrice2<<"\tR$ "<<AmountofSale2<<"\n";
        }
        if (num3 != 0)
        {
            cout<<"\t\tSashimi (7 fatias)      \t   "<<num3<<"\tR$ "<<UnitPrice3<<"\tR$ "<<AmountofSale3<<"\n";
        }
        if (num4 != 0)
        {
            cout<<"\t\tHarumari queijo ou frango    \t  "<<num4<<"\tR$ "<<UnitPrice4<<"\tR$ "<<AmountofSale4<<"\n";
        }
        if (num5 != 0)
        {
            cout<<"\t\tYakissoba   		\t"<<num5<<"\tR$ "<<UnitPrice5<<"\tR$ "<<AmountofSale5<<"\n";
        }
        if (num6 != 0)
        {
            cout<<"\t\tHamburguer de Sushi     \t"<<num6<<"\tR$ "<<UnitPrice6<<"\tR$ "<<AmountofSale6<<"\n";
        }
        if (num7 != 0)
        {
            cout<<"\t\tUramaki\t            	   	"<<num7<<"\tR$ "<<UnitPrice7<<"\tR$ "<<AmountofSale7<<"\n";
        }
        if (num8 != 0)
        {
            cout<<"\t\tUramaki vegetariano  	  \t"<<num8<<"\tR$ "<<UnitPrice8<<"\tR$ "<<AmountofSale8<<"\n";
        }
		

        cout<<"\t\t------------------------------------------------------------------";
        total=0;
        total=total+AmountofSale1+AmountofSale2+AmountofSale3+AmountofSale4+AmountofSale5+AmountofSale6+AmountofSale7+AmountofSale8+valorFrete;
        SetConsoleTextAttribute(h, 10);
        cout<<"\n\t\tFrete:\t\t\t\t\t\t\t"<<"R$ "<<valorFrete;
        cout<<"\n\t\tTotal:\t\t\t\t\t\t\t"<<"R$ "<<total;
        
        }
        else
		{
			clear();
	        goto add;
		}
		

		SetConsoleTextAttribute(h, 15);
		cout<<"\n\n\n\t\t\t\t\tGerando conta ";
   		for(int a=1;a<8;a++)
		{
			Sleep(300);
			cout << "...";
		}
   		cout<<"\n\t\t";
   		system("PAUSE");

   		do
        {
       	   bill:
       	   Sleep(500);
           cls();
           SetConsoleTextAttribute(h, 14);
           cout<<"\n\t\t       *******************************************************\n";
           cout<<"\t\t       %%%%%%%%%%%%%%%%%%        Conta        %%%%%%%%%%%%%%%%%\n";
           cout<<"\t\t       *******************************************************\n";

            SetConsoleTextAttribute(h, 15);
            cout<<"\n\n\tTotal: R$"<<total;
            cout<<"\n\tInsira o dinheiro recebido: R$";
            cin >> pepay;
           if (pepay < total)
           {
  	            SetConsoleTextAttribute(h, 12);
                cout<<"\n\t\t\tSALDO INSUFICIENTE, INSIRA MAIS DINHEIRO EM SUA CONTA\n";
                clear();
               goto bill;
           }
        }
        while (pepay < total);
        change = pepay - total;
        cout<<"\tSeu troco é: R$"<<change<<"\n\n\n\n\t\t";

   		system("PAUSE");

			cls();
			SetConsoleTextAttribute(h,14);
			cout<<"\t\t\t\t\t   ------------         \n";
			cout<<"\t\t\t\t\t /%%%%%%%%%%%%%%\\      \n";
			cout<<"\t\t\t\t\t/%%%%%%%%%%%%%%%%\\     \n";
			SetConsoleTextAttribute(h,12);
			cout<<"\t\t\t\t\t\\wwwwwwwwwwwwwwww/    \n";
			SetConsoleTextAttribute(h,10);
			cout<<"\t\t\t\t\t <%%%%%%%%%%%%%%>     \n";
			SetConsoleTextAttribute(h,4);
			cout<<"\t\t\t\t\t (%%%%%%%%%%%%%%)     \n";
			SetConsoleTextAttribute(h,14);
			cout<<"\t\t\t\t\t/%%%%%%%%%%%%%%%%\\    \n";
			cout<<"\t\t\t\t\t\\%%%%%%%%%%%%%%%%/    \n";
			cout<<"\t\t\t\t\t \\%%%%%%%%%%%%%%/       \n";
			cout<<"\t\t\t\t\t   ------------         \n";

			SetConsoleTextAttribute(h,15);
			cout<<"\t\t\t------------------------------------------------\n";
			cout<<"\t\t\t\t\t    SISTEMAKI"<<endl;
			cout<<"\t\t\t    RUA INVISIVEL, N 10, AO LADO DA CASA DO PROFESSOR VICTOR"<<endl;
			cout<<"\t\t\t\t\t  Contato n. 999999999"<<endl;
			cout<<"\n\t\t\t\t\t   ORDEM"<<endl;
			cout<<"\n\t\t\t\tCAIXA RECIBO"<<endl;
			std::cout <<"\t\t\t\t"<< currentDateTime() << std::endl;
    		getchar();
			if (num1 != 0)
           {
                cout<<"\t\t\t\t"<<num1<<"  "<<"Temaki na alga ou no pote\t\t\t"<<AmountofSale1<<"\n";
           }
           if (num2 != 0)
           {
                cout<<"\t\t\t\t"<<num2<<"  "<<"Sushi poção (8 unidade)\t\t\t"<<AmountofSale2<<"\n";
           }
           if (num3 != 0)
           {
                cout<<"\t\t\t\t"<<num3<<"  "<<"Sashimi (7 fatias)\t"<<AmountofSale3<<"\n";
           }
           if (num4 != 0)
           {
                cout<<"\t\t\t\t"<<num4<<"  "<<"Harumari queijo ou frango\t\t"<<AmountofSale4<<"\n";
           }
           if (num5 != 0)
           {
                cout<<"\t\t\t\t"<<num5<<"  "<<"Yakissoba\t\t"<<AmountofSale5<<"\n";
           }
           if (num6 != 0)
           {
                cout<<"\t\t\t\t"<<num6<<"  "<<"Hamburguer de Sushi\t"<<AmountofSale6<<"\n";
           }
           if (num7 != 0)
           {
                cout<<"\t\t\t\t"<<num7<<"  "<<"Uramaki\t"<<AmountofSale7<<"\n";
           }
           if (num8 != 0)
           {
                cout<<"\t\t\t\t"<<num8<<"  "<<"Uramaki vegetariano\t\t\t"<<AmountofSale8<<"\n";
           }
        cout<<"\t\t\t\t\t\t\t\t_____\n";
        cout<<"\t\t\t\t\t          TOTAL.........R$"<<total<<endl;
        cout<<"\t\t\t\t\t          VALOR..........R$"<<pepay<<endl;
        cout<<"\t\t\t\t\t          FRETE........R$"<<valorFrete<<endl;
        cout<<"\t\t\t\t\t          TROCO........R$"<<change<<endl;
        cout<<"\n\t\t\t------------------------------------------------"<<endl;
		cout<<"\n\t\t\t\t   ESTE RECIBO SERÁ VÁLIDO"<<endl;
		cout<<"\n\t\t\t\tPOR CINCO (5) ANOS A PARTIR DA DATA DE"<<endl;
        cout<<"\n\t\t\t\t\tEMISSÃO"<<endl;
		
        system("PAUSE");
        cls();
        title();
        SetConsoleTextAttribute(h, 14);
        cout<<"\n\t\t===================================================================";
	    cout<<"\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
	    cout << "\n\t\t\t\t SISTEMAKI, O SISTEMA PERFEITO PARA MATAR SUA FOME!";
	    cout<<"\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
        cout<<"\n\t\t==================================================================="<<endl;
        SetConsoleTextAttribute(h, 15);

		return 0;
		}
		}

	while (password != "user");
    return 0;
}

void title(){

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int i;
	SetConsoleTextAttribute(h,14);
	cout<<"\n\n\n\n";
	cout<<"\t\t 			********* SISTEMAKI *********\n";


	SetConsoleTextAttribute(h,14);
	cout<<"\t\t          ------------       \n";
	cout<<"\t\t        /%%%%%%%%%%%%%%\\      \n";
	cout<<"\t\t       /%%%%%%%%%%%%%%%%\\     ";
	SetConsoleTextAttribute(h,14);
	cout<<"**    **   **    **   ********\n";
	SetConsoleTextAttribute(h,12);
	cout<<"\t\t       \\wwwwwwwwwwwwwwww/    ";
	SetConsoleTextAttribute(h,14);
	cout<<"/**   /**  /**   /**  /**    **          \n";
	SetConsoleTextAttribute(h,10);
	cout<<"\t\t        <%%%%%%%%%%%%%%>     ";
	SetConsoleTextAttribute(h, 14);
	cout<<"/********  /**   /**  /*********      \n";
	SetConsoleTextAttribute(h,4);
	cout<<"\t\t        (%%%%%%%%%%%%%%)     ";
	SetConsoleTextAttribute(h,12);
	cout<<"/**   /**  /**   /**  /**     **          \n";
	SetConsoleTextAttribute(h,14);
	cout<<"\t\t       /%%%%%%%%%%%%%%%%\\    ";
	SetConsoleTextAttribute(h, 12);
	cout<<"/**   /**  //******   /*********    \n";
	SetConsoleTextAttribute(h, 14);
	cout<<"\t\t       \\%%%%%%%%%%%%%%%%/    ";
	SetConsoleTextAttribute(h, 12);
	cout<<"//    //    //////    /////////  \n";
	SetConsoleTextAttribute(h, 14);
	cout<<"\t\t        \\%%%%%%%%%%%%%%/        \n";
	cout<<"\t\t          ------------         \n\n";
	cout<<"\t\t\t\t      ";
}

void clear(){
	cin.clear();
	cin.ignore(100,'\n');
}
void cls(){
	system("cls");
}

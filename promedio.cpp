#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
void parseCSV()
{
    ifstream data("PromedioCSV.csv");//indicamos el archivo el cual vamos a leer
    string line;
    vector<vector<string>> parsedCsv;
    int contador1=0;//creamos un contador
    int contador2=0;//creamos un contador
    while (getline(data,line))//Extraemos datos de la linea deseada 
    {
        stringstream lineStream(line);
        string cell;
        vector<string>parsedRow;
    
        contador2=0;
        while (getline(lineStream,cell,','))
        {
            parsedRow.push_back(cell);
            contador2++;//añadimos datos al contador
        }
        contador1++;//añadimos datos al contador
        parsedCsv.push_back(parsedRow);


    }
    float sumatoria=0;//creamos una nueva variable que lleve la suma de todas las notas
    for(int i=0; i<contador1; i++){//Parametrizamos el ciclo for
        for(int j=0; j<contador1;j++){//ponemos un ciclo para la columna y otro para la fila
        float suma=std::stof(parsedCsv[i][j=2]);
        sumatoria=(suma+sumatoria);//le damos valor a la sumatoria
        }
        cout << '\n';//salto de linea


    }float promedio=0;//creamos variable que lleve el promedio
    promedio=sumatoria/contador2;//le asignamos el valor al promedio que es igual a la sumatoria entre el numero de veces que se hizo el ciclo for
    cout<<promedio;//imprimimos el valor del rpomedio
}
int main()
{
    parseCSV();
    return 0;//fin
}

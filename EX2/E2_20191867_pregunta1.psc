//	Nombre: Mateo Guerrero Isuiza
// 	Código: 20191867

Algoritmo Pares_Pitagoricos
	//Entradas
	Escribir "Ingrese la cantidad de pares de números pitagóricos a buscar:" //Mensaje en pantalla
	Leer cant_pares   //Entrada cantidad de pares
	Escribir "Ingrese el número que representa la hipotenusa:" //Mensaje en pantalla
	Leer hipotenusa //Entrada valor numérico de la hipotenusa
	//Proceso 
	tiene_raiz<-0  //Designa una variable para reconocer enteros
	// Bucle de los 1000 primeros numeros enteros para comprobar que la hipotenusa tiene una de esta raices
	Para i<-1 Hasta 1000 Con Paso 1 Hacer  
		Si i^2=hipotenusa			//Condicional que es verdadero si un valor del 1 al 1000 es raiz de hipotenusa
			tiene_raiz<-1   //Variable de validación cambia a 1 - reconoce que hipotenusa tiene raiz
			raiz_hipotenusa<-i //Se guarda el valor de la raiz de la hipotenusa
		FinSi
	Fin Para
	Si (cant_pares<=0) //Condicional validacion cantidad de pares solicitada mayor a 0
		//Salida 1.1 condicional verdadero - la cantidad es negativa , no es correcta
		Escribir "La cantidad de pares ingresada no es correcta"  //Mensaje en pantalla
	SiNo //Proceso/Salida 1.2 en caso la cantidad de pares sea entero positivo
		Si (tiene_raiz=1) // Salida 1.2.1 condicional verdadero, la hipotenusa tiene raiz, se realiza proceso
			contador_pares<-0
			Escribir "Las combinaciones encontradas son:" //Mensaje en pantalla
			//a y b ninguno de los 2 puede ser 0 o la raiz de la hipotenusa
			Para valor_a<-1 hasta raiz_hipotenusa-1 con paso 1 Hacer //Bucle que otorga valores al primer factor (a) que tiene como maximo a la raiz-1
				Para valor_b<-1 hasta raiz_hipotenusa-1 con paso 1 Hacer //Bucle que otorga valores al segundo factor (b) que tiene como maximo a la raiz-1
					Si valor_a^2+valor_b^2=hipotenusa  //Si los valores de a y b al cuadrado son igual a la hipotenusa se imprime en pantalla
						Escribir valor_a,"^2 + ",valor_b,"^2 = ",hipotenusa //Mensaje en pantalla, se imprime la ecuación del primer par
						contador_pares<-contador_pares+1 //Se aumenta en 1 la cuenta del contador de pares
					FinSi
				FinPara
			FinPara
			//Salida 1.2.1.1 
			Escribir "Se encontraron ",contador_pares," cantidad de pares de números pitagóricos para la hipotenusa ingresada" //Mensaje en pantalla, se imprime el valor de pares encontrado
			Si (contador_pares<cant_pares)
				//Salida 1.2.1.2.1, la cantidad de pares encontrados es menor a la solicitada
				Escribir "La cantidad de pares encontradas es menor a la cantidad buscada." //Mensaje en pantalla
			SiNo
				//Salida 1.2.1.2.2, la cantidad de pares encontrados es igual a la solicitada
				Escribir "La cantidad de pares encontradas es igual a la cantidad buscada." //Mensaje en pantalla
			FinSi
		Sino //Salida 1.2.2 condicional falso, la hipotenusa no tiene raiz 
			Escribir "La hipotenusa ingresada no tiene raíz cuadrada exacta"
		FinSi
	FinSi
FinAlgoritmo

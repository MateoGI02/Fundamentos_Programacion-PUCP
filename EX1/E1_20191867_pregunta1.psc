//Nombre: Mateo Guerrero Isuiza
//Código: 20191867

Algoritmo Poliedros
	//Entrada1_ Tipo de poliedro
	Escribir "Ingrese el tipo de poliedro a evaluar (T-Tetraedro, H-Hexaedro, O-Octaedro):" //Solicitud del tipo de poliedro
	Leer tipo_poliedro //Lectura del tipo de poliedro
	//Proceso
	Si tipo_poliedro="T" o tipo_poliedro="t"  //Validación de tipo de poliedro-Tetraedro
		//Entrada 2.1 Condicional Lectura lados del triangulo
		Escribir "Ingrese los 3 lados del triángulo:" //Solicitud de lados del Tetraedro
		Leer lado1_T    	//Lectura del lado 1 del triangulo 
		Leer lado2_T		//Lectura del lado 2 del triangulo 
		Leer lado3_T		//Lectura del lado 3 del triangulo 
		Si lado1_T=lado2_T y lado2_T=lado3_T  //Validación de triangulo equilatero y poliedro regular
			//Salida2.1_Mensaje de poliedro regular
			Escribir "El tetraedro ingresado es un poliedro regular"
			//Entrada2.1.1 Lectura del tipo del calculo
			Escribir "Ingrese el tipo de cálculo a realizar (A: Área o V: Volumen):"
			Leer tipo_calculo_T
			Si tipo_calculo_T="A" o tipo_calculo_T="a" 
				//Proceso 2.1
				area_T<-RAIZ(3)*lado1_T^2
				//Salida2.1 Condicional Área del poliedro
				Escribir "El área del poliedro es ", area_T
			SiNo
				Si tipo_calculo_T="V" o tipo_calculo_T="v" 
					//Proceso 2.2
					volumen_T<-RAIZ(2)/12*lado1_T^3
					//Salida2.2 Condicional Volumen del poliedro
					Escribir "El volumen del poliedro es: ", volumen_T
				SiNo
					//Salida2.3 Tipo de calculo erroneo
					Escribir "El tipo de cálculo ingresado no es correcto."
				FinSi
			FinSi
		SiNo //Salida negativa de no ser un poliedro regular
			Escribir "Los lados ingresados no forman un triángulo." //Mensaje de poliedro no regular
		FinSi
	SiNo
		Si tipo_poliedro="H" o tipo_poliedro="h" //Validación de tipo de poliedro-Hexaedro
			//Entrada 2.2 Condicional Lectura lados del cuadrado
			Escribir "Ingrese los 4 lados del cuadrado:" //Solicitud de lados del Hexaedro
			Leer lado1_H 	//Lectura del lado 1 del cuadrado
			Leer lado2_H 	//Lectura del lado 2 del cuadrado
			Leer lado3_H 	//Lectura del lado 3 del cuadrado
			Leer lado4_H 	//Lectura del lado 4 del cuadrado
			Si lado1_H=lado2_H y lado2_H=lado3_H y lado3_H=lado1_H //Validación de cuadrado y poliedro regular
				//Salida2.2_Mensaje de poliedro regular
				Escribir "El Hexaedro ingresado es un poliedro regular"
				//Entrada2.2.1 Lectura del tipo del calculo
				Escribir "Ingrese el tipo de cálculo a realizar (A: Área o V: Volumen):"
				Leer tipo_calculo_H
				Si tipo_calculo_H="A" o tipo_calculo_H="a" 
					//Proceso 2.1
					area_H<-6*lado1_H^2
					//Salida2.1 Condicional Área del poliedro
					Escribir "El área del poliedro es ", area_H
				SiNo
					Si tipo_calculo_H="V" o tipo_calculo_H="v" 
						//Proceso 2.2
						volumen_H<-lado1_H^3
						//Salida2.2 Condicional Volumen del poliedro
						Escribir "El volumen del poliedro es: ", volumen_H
					SiNo
						//Salida2.3 Tipo de calculo erroneo
						Escribir "El tipo de cálculo ingresado no es correcto."
					FinSi
				FinSi
			SiNo //Salida negativa de no ser un poliedro regular
				Escribir "Los lados ingresados no forman un cuadrado."
			FinSi
		SiNo
			Si tipo_poliedro="O" o tipo_poliedro="o" //Validación de tipo de poliedro-Octaedro
				//Entrada 2.3 Condicional Lectura lados del triangulo
				Escribir "Ingrese los 3 lados del triángulo:"
				Leer lado1_O //Lectura del lado 1 del triangulo 
				Leer lado2_O //Lectura del lado 2 del triangulo 
				Leer lado3_O //Lectura del lado 3 del triangulo 
				Si lado1_O=lado2_O y lado2_O=lado3_O 
					//Salida2.3 Mensaje de poliedro regular
					Escribir "El Octaedro ingresado es un poliedro regular"
					//Entrada2.3.1 Lectura del tipo del calculo
					Escribir "Ingrese el tipo de cálculo a realizar (A: Área o V: Volumen):"
					Leer tipo_calculo_O
					Si tipo_calculo_O="A" o tipo_calculo_O="a" 
						//Proceso 2.1
						area_O<-2*RAIZ(3)*lado1_O^2
						//Salida2.1 Condicional Área del poliedro
						Escribir "El área del poliedro es ", area_O
					SiNo
						Si tipo_calculo_O="V" o tipo_calculo_O="v" 
							//Proceso 2.2
							volumen_O<-RAIZ(2)/3*lado1_O^3
							//Salida2.2 Condicional Volumen del poliedro
							Escribir "El volumen del poliedro es: ", volumen_O
						SiNo
							//Salida2.3 Tipo de calculo erroneo
							Escribir "El tipo de cálculo ingresado no es correcto."
						FinSi
					FinSi
				SiNo //Salida negativa de no ser un poliedro regular
					Escribir "Los lados ingresados no forman un triángulo."
				FinSi
			SiNo
				//Salida 2.4 Opción no válida de poliedro
				Escribir "Opción no válida."	
			FinSi
		FinSi
	FinSi
FinAlgoritmo

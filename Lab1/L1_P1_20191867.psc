// 	Nombre: Mateo Guerrero Isuiza
//	C�digo: 20191867

Algoritmo Iden_Trigo
	// Imprime mensaje para ingresar datos //
	Escribir "Ingrese �ngulo en sexagesimal"
	// Ingreso de datos //
	Leer angulo
	// Transformaci�n sexagesimal //
	ang_rad<-angulo*2*3.1416/360
	// Revisi�n si cumple propiedad //
	condi<- abs(((sen(ang_rad))^2 +(cos(ang_rad))^2) -1)=0
	//Salida de datos//
	Escribir condi
FinAlgoritmo

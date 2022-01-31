//   Nombre: Mateo Guerrero Isuiza
//	Código: 20191867
Algoritmo Pro_Loga
	//Entradas
	Escribir "Ingrese la base:"  // Lectura de solicitud de dato base
	Leer Base  //Ingresar base
	Escribir "Ingrese dos numeros:"  // Lectura de solicitud de datos númericos
	Leer a,b  //Ingresar números a usar
	//Proceso
	//Calculo logaritmo 
	logpro<- Ln(a*b)/Ln(base)  //Logaritmo producto
	logcoc<- Ln(a/b)/Ln(base)  //Logaritmo cociente
	Escribir "logaritmo del producto = ", logpro
	Escribir "logaritmo del cociente = ", logcoc
	//Calculo logaritmo por separado de a y b en la base 
	loga<-Ln(a)/Ln(base) 		//Logaritmo a en base "base"
	logb<-Ln(b)/Ln(base)		//Logaritmo b en base "base"
	//Calculo propiedades
	prop1<-loga+logb	//Propiedad logaritmo de productos
	prop2<-loga-logb	//Propiedad logaritmo de cocientes
	//Salidas
	//Comprobación de propiedades
	Si prop1=logpro y prop2=logcoc Entonces
		//Salida en caso se valida que se cumplen propiedades
		Escribir "Se cumplen las propiedades"
	SiNo
		//Salida en caso no se valida que se cumplen propiedades
		Escribir "No se cumplen las propiedades"
	FinSi
FinAlgoritmo

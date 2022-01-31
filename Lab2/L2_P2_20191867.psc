// Nombre: Mateo Guerrero Isuiza
// Código: 20191867
Algoritmo DisMasCerc
	//Entradas
	Escribir "Ingrese las coordenadas ´x´ y ´y´ del punto A"  // Mensaje de solicitud coordenadas punto A
	Leer xa,ya // Lectura coordenadas A
	Escribir "Ingrese las coordenadas ´x´ y ´y´ del punto B" // Mensaje de solicitud coordenadas punto B
	Leer xb,yb // Lectura coordenadas B
	Escribir "Ingrese las coordenadas ´x´ y ´y´ del punto C" // Mensaje de solicitud coordenadas punto C
	Leer xc,yc // Lectura coordenadas C
	Escribir "Ingrese las coordenadas ´x´ y ´y´ del punto X" // Mensaje de solicitud coordenadas punto X
	Leer xx,yx // Lectura coordenadas X
	//Proceso 
	disax<-rc(((xx-xa)^2)+((yx-ya)^2))    //Calculo distancia X a A
	disbx<-rc(((xx-xb)^2)+((yx-yb)^2))	//Calculo distancia X a B
	discx<-rc(((xx-xc)^2)+((yx-yc)^2))	//Calculo distancia X a C
	//Salidas
	Si disax<disbx y disax<discx Entonces   //Validación A mas cerca a X
		Escribir " El punto más cercano es A." //Salida A más cercano a X
	FinSi
	Si disbx<disax y disbx<discx Entonces	//Validación B mas cerca a X
		Escribir " El punto más cercano es B."  //Salida B más cercano a X
	FinSi
	Si discx<disbx y discx<disax Entonces	//Validación C mas cerca a X
		Escribir " El punto más cercano es C."  //Salida C más cercano a X
	FinSi
FinAlgoritmo

package com.Invents.Main;

import java.util.Scanner;


public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int opc=0;

		System.out.flush();

		switch(menuPrincipal()){
		case 1: opc=menuUsuarios(); break;
		case 2: System.out.println("2"); break;
		case 3: System.out.println("3"); break;
		case 4:System.out.println("4"); break;
		case 0: System.out.println("salir"); break; 
		
		}
		

	}
	
	
	
		public static int menuPrincipal(){
		int opc=0;
		Scanner teclado= new Scanner(System.in); 
		System.out.println("1.-Usuarios");
		System.out.println("2.-Inventarios");
		System.out.println("3.-Clientes");
		System.out.println("4.-Opciones");
		System.out.println("0.-Salir");
		opc=teclado.nextInt();
		teclado.close();
		return opc; 
		}
		
		public static int menuUsuarios() {	
			int opc=0;
			Scanner teclado= new Scanner(System.in); 
			System.out.println("1.-Agregar Usuario");
			System.out.println("2.-Asignar Usuario Actual");
			System.out.println("3.-Cambiar Datos de Usuario");
			System.out.println("4.-Regresar <--");
			opc=teclado.nextInt();
			teclado.close();
			return opc;
		}
	


}

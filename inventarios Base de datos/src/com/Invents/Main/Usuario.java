package com.Invents.Main;

public class Usuario {
	private int codigo;
	private String nombre;
	private String area;
	
	public Usuario(int codigo, String nombre, String area) {
		super();
		this.codigo = codigo;
		this.nombre = nombre;
		this.area = area;
	}
	//---------------------------------///
	public int getCodigo() {
		return codigo;
	}
	public void setCodigo(int codigo) {
		this.codigo = codigo;
	}
	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	public String getArea() {
		return area;
	}
	public void setArea(String area) {
		this.area = area;
	}
	

}

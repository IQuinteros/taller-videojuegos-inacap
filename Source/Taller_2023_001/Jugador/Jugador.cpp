// Fill out your copyright notice in the Description page of Project Settings.


#include "Taller_2023_001/Jugador/Jugador.h"

void AJugador::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (PlayerInputComponent) {
		PlayerInputComponent->BindAction("salto", IE_Pressed, this, &AJugador::EjecutarSalto);
		PlayerInputComponent->BindAction("salto", IE_Released, this, &AJugador::DetenerSalto);
	}
}

void AJugador::EjecutarSalto()
{
	Jump();
}

void AJugador::DetenerSalto()
{
	StopJumping();
}

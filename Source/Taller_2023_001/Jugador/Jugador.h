// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Jugador.generated.h"

/**
 * 
 */
UCLASS()
class TALLER_2023_001_API AJugador : public APaperCharacter
{
	GENERATED_BODY()

public:

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	void EjecutarSalto();
	void DetenerSalto();
	
};

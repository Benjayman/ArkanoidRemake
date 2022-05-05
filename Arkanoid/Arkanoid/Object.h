#pragma once
#include "PhysicsComponent.h"
#include <iostream>
#include <list>
#include "raylib.h"

class Object
{
public:

	Object();
	~Object();

	int id;

	Object* parent = new Object();
	std::list<Object> children = {};

	bool isWaitingDestroy = false;

	void AddToGameWorld();
	void DeleteChild(Object child);

	virtual void OnUpdate(float DeltaTime);
	virtual void Update(float DeltaTime);

	virtual void OnDraw();
	virtual void Draw();

	PhysicsComponent* physics = new PhysicsComponent();


	bool operator== (const Object& other) const { return id == other.id; }
	bool operator!= (const Object& other) const { return !operator==(other); }

protected:
	Matrix* localTransform = new Matrix();
	Matrix* globalTransform = new Matrix();





};


#include "PCH.h"
#include "Sample.h"


Sample::Sample()
{
}


Sample::~Sample()
{
}

bool Sample::Init()
{
	man = Sprite::Create(L"Resources/Anubis.png");

	man->SetPosition(500.f, 500.f);
	AddChild(man);

	return true;
}

void Sample::Update(float deltaTime)
{
	Scene::Update(deltaTime);
}

void Sample::Render()
{
	Scene::Render();
}
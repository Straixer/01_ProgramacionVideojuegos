#include <vector>
#include <cstdio>
struct Entity {
	unsigned short health;// 2 bytes
	__int8 resistance;// 1 byte
	short strenght;// 2 bytes
	float cooldown;// 4 bytes
	bool isActive;// 1 byte
	short posX;// 2 bytes
	short posY;// 2 bytes
	float rotation;// 4 bytes
	short savePosX;// 2 bytes
	short savePosY;// 2 bytes
};

void initEntity(Entity& entity) {
	entity.health = 20000;
	entity.resistance = 23;
	entity.strenght = 534;
	entity.cooldown = 0.0f;
	entity.isActive = 1;
	entity.posX = 0;
	entity.posY = 0;
	entity.rotation = 0.0f;
	entity.savePosX = 0;
	entity.savePosY = 0;

}

void ejercicio5() {
	printf("-------------EJERCICIO 5------------\n");
	const int maxEntityCount = 100000;
	std::vector<Entity> entityVector;
	entityVector.resize(maxEntityCount);

	for (Entity& e : entityVector) {
		initEntity(e);
	}

	double structSize = sizeof(Entity);
	double totalBytes = (maxEntityCount * structSize);
	double totalKB = totalBytes / 1024.0;
	printf("Tamanio de la estructura Entity: %f bytes\n", structSize);
	printf("Memoria usada por entidades: %f KB\n", totalKB);
}
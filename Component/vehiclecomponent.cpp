#include "Component/vehiclecomponent.h"

VehicleComponent::VehicleComponent(GameObject * gameObject):
    Component(gameObject)
{

}

VehicleComponent::~VehicleComponent()
{

}

void VehicleComponent::accelerate()
{
qDebug() << "accelerate" ;
gameObject->getComponent<Rigidbody>()->applyCentralForce((btVector3(btScalar(100.),btScalar(-100.),btScalar(0.))));
}

void VehicleComponent::decelerate()
{
qDebug() << "decelerate" ;
}

void VehicleComponent::turnLeft()
{
qDebug() << "turnLeft" ;
}

void VehicleComponent::turnRight()
{
qDebug() << "turnRight" ;
}

void VehicleComponent::actionKey()
{
qDebug() << "actionKey" ;
}

void VehicleComponent::boostKey()
{
qDebug() << "boostKey" ;
}
void VehicleComponent::update()
{
}
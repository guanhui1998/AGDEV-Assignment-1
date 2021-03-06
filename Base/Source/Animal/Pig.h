#ifndef PIG_H
#define PIG_H

#include "../GenericEntity.h"
#include "../GroundEntity.h"
#include "../SceneGraph/SceneNode.h"
class Mesh;

class Pig : public GenericEntity
{
public:
    Pig(void);
    virtual ~Pig();

    void Init();

    //Set target
    void SetTarget(const Vector3& target);
    //Set up
    void SetUp(const Vector3& up);
    //Set the boundary 
    void SetBoundary(Vector3 max, Vector3 min);
    //Set the terrain
    void SetTerrain(GroundEntity* m_pTerrain);

    //Get position
    Vector3 GetPos(void) const;
    //Get target
    Vector3 GetTarget(void) const;
    //Get up
    Vector3 GetUp(void) const;
    //Get the terrain for the player info
    GroundEntity* GetTerrain(void);

    //Update
    void Update(double dt = 0.0333f);

    //Constrain the position within the borders
    void Constrain(void);
    //Render
    void Render(void);
private:
    Vector3 target, up;
    Vector3 maxBoundary, minBoundary;
    GroundEntity* m_pTerrain;

    GenericEntity* Body,*leg1,*leg2,*leg3,*leg4, *Head,*Nose;
    CSceneNode* Body_Node;
    CUpdateTransformation* updateTrans;
};



#endif
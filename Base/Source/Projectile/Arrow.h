#ifndef ARROW_H
#define ARROW_H

#include "Projectile.h"
#include "EntityBase.h"
#include "Vector3.h"
#include "Collider/Collider.h"

class Mesh;
class CPlayerInfo;

class Arrow : public CProjectile
{
public:
	Arrow(void);
	Arrow(Mesh* _modelMesh);
	~Arrow(void);
public:
	void SetLength(const float m_fLength);
	float GetLength(void) const;
	void CalculateAngles(void);

	// Update the status of this projectile
	void Update(double dt = 0.0333f);
	// Render this projectile
	void Render(void);
private:
	float m_fLength;
	float angle_x, angle_y, angle_z;
};

namespace Create
{
	Arrow* arrow(const std::string& _meshName, const Vector3& _position, const Vector3& _direction, const float m_fLength, const float m_fLifetime, const float m_fSpeed, CPlayerInfo* _source = NULL);
};

#endif
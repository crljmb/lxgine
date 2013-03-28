#ifndef __LXENTITY_H__
#define __LXENTITY_H__

#include "LXLockableTarget.h"

class LXMatrix3D;
class LXPoint3D;
class LXGame;

class LXEntity : public LXLockableTarget {
 public:
  // Not owned pointers
  LXGame *game;
  
  LXEntity();
  virtual ~LXEntity();

  virtual void init();

  virtual void update();
  virtual void render();
  virtual void Render();

  virtual void translate(double tx, double ty, double tz);
  virtual void rotate(double rx, double ry, double rz);

  LXPoint3D getPos();
  double getPitch();
  double getYaw();
  double getRoll();

  // LXLockableTarget
  virtual void setDelegate(LXLockableTargetDelegate *delegate);

  double pitch, yaw, roll;
 protected:
  LXPoint3D *pos;
  
  LXMatrix3D *transform;
};

#endif

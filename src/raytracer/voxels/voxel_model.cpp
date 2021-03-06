#include "voxel_model.h"

#include <cstdlib>


namespace LumixRayTracer
{

const float VoxelModel::VOXEL_SIZE_X = 1.0f;
const float VoxelModel::VOXEL_SIZE_Y = 1.0f;
const float VoxelModel::VOXEL_SIZE_Z = 1.0f;

VoxelModel::VoxelModel(const uint32_t sizeX, const uint32_t sizeY, const uint32_t sizeZ)
	: Model(),
	_sizeX(sizeX), _sizeY(sizeY), _sizeZ(sizeZ),
	_maxPoint(Position.x + VOXEL_SIZE_X * sizeX, Position.y + VOXEL_SIZE_Y * sizeY, Position.z + VOXEL_SIZE_Z * sizeZ)
{
	_data = (uint8_t*)calloc(sizeX * sizeY * sizeZ, sizeof(uint8_t));

	SetVoxel(0, 0, 0, 1);
	SetVoxel(9, 9, 9, 1);
	for (int x = 0; x < _sizeX; ++x)
	{
		for (int y = 0; y < _sizeY; ++y)
		{
			for (int z = 0; z < _sizeZ; ++z)
			{
				if (rand() % 2 == 0)
					SetVoxel(x, y, z, 1);
			}
		}
	}
}

} // ~ namespace LumixRayTracer

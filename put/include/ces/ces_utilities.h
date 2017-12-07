#ifndef ces_utility_h__
#define ces_utility_h__

#include "ces/ces_scene.h"
#include <vector>

namespace put
{
    namespace ces
    {
        struct scene_tree
        {
            s32 node_index;
            const c8* node_name;
            
            std::vector<scene_tree> children;
        };
        
        u32     get_new_node( entity_scene* scene );
        
        void    clone_node( entity_scene* scene, u32 src, u32 dst, s32 parent, vec3f offset = vec3f::zero(), const c8* suffix = "_cloned");
        
        void    tree_to_node_index_list( const scene_tree& tree, std::vector<s32>& list_out );
        void    build_scene_tree( entity_scene* scene, u32 start_node, scene_tree& tree_out );
        void    build_joint_list( entity_scene* scene, u32 start_node, std::vector<s32>& joint_list );
        
        void    scene_tree_enumerate( const scene_tree& tree, s32& selected );
        void    scene_tree_add_node( scene_tree& tree, scene_tree& node, std::vector<s32>& heirarchy );
        
        bool    is_valid( u32 handle );
        
        Str     read_parsable_string(const u32** data);
        Str     read_parsable_string( std::ifstream& ifs );
        void    write_parsable_string( const Str& str, std::ofstream& ofs );
        
        //-----------------------------------------------------------------------------------------------------------------------------------
        //inlines
        //-----------------------------------------------------------------------------------------------------------------------------------
        inline bool is_valid( u32 handle )
        {
            return handle != -1;
        }
	}
}
#endif

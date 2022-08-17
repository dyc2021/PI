#include <PI/pi.h>
#include <PI/pi_runtime_reconfig.h>
#include <PI/target/pi_runtime_reconfig_imp.h>

pi_status_t pi_runtime_reconfig_init_p4objects_new(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt, 
                                                   const char* p4objects_new_json, 
                                                   char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_init_p4objects_new(session_handle,
                                                   dev_tgt,
                                                   p4objects_new_json,
                                                   p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_insert_table(pi_session_handle_t session_handle,
                                             pi_dev_tgt_t dev_tgt,
                                             const char* pipeline_name,
                                             const char* table_name,
                                             char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_insert_table(session_handle,
                                             dev_tgt,
                                             pipeline_name,
                                             table_name,
                                             p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_change_table(pi_session_handle_t session_handle,
                                             pi_dev_tgt_t dev_tgt,
                                             const char* pipeline_name,
                                             const char* table_name,
                                             const char* edge_name,
                                             const char* table_name_next,
                                             char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_change_table(session_handle,
                                             dev_tgt,
                                             pipeline_name,
                                             table_name,
                                             edge_name,
                                             table_name_next,
                                             p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_delete_table(pi_session_handle_t session_handle,
                                             pi_dev_tgt_t dev_tgt,
                                             const char* pipeline_name,
                                             const char* table_name,
                                             char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_delete_table(session_handle,
                                             dev_tgt,
                                             pipeline_name,
                                             table_name,
                                             p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_insert_conditional(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt,
                                                   const char* pipeline_name,
                                                   const char* branch_name,
                                                   char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_insert_conditional(session_handle,
                                                   dev_tgt,
                                                   pipeline_name,
                                                   branch_name,
                                                   p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_change_conditional(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt,
                                                   const char* pipeline_name,
                                                   const char* branch_name,
                                                   bool true_or_false_next,
                                                   const char* node_name,
                                                   char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_change_conditional(session_handle,
                                                   dev_tgt,
                                                   pipeline_name,
                                                   branch_name,
                                                   true_or_false_next,
                                                   node_name,
                                                   p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_delete_conditional(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt,
                                                   const char* pipeline_name,
                                                   const char* branch_name,
                                                   char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_delete_conditional(session_handle,
                                                   dev_tgt,
                                                   pipeline_name,
                                                   branch_name,
                                                   p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_insert_flex(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* node_name,
                                            const char* true_next_node,
                                            const char* false_next_node,
                                            char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_insert_flex(session_handle,
                                            dev_tgt,
                                            pipeline_name,
                                            node_name,
                                            true_next_node,
                                            false_next_node,
                                            p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_change_flex(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* flx_name,
                                            bool true_or_false_next,
                                            const char* node_next,
                                            char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_change_flex(session_handle,
                                            dev_tgt,
                                            pipeline_name,
                                            flx_name,
                                            true_or_false_next,
                                            node_next,
                                            p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_delete_flex(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* flx_name,
                                            char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_delete_flex(session_handle,
                                            dev_tgt,
                                            pipeline_name,
                                            flx_name,
                                            p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_insert_register_array(pi_session_handle_t session_handle,
                                                      pi_dev_tgt_t dev_tgt,
                                                      const char* register_array_name,
                                                      const uint32_t register_array_size,
                                                      const uint32_t register_array_bitwidth,
                                                      char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_insert_register_array(session_handle,
                                                      dev_tgt,
                                                      register_array_name,
                                                      register_array_size,
                                                      register_array_bitwidth,
                                                      p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_change_register_array(pi_session_handle_t session_handle,
                                                      pi_dev_tgt_t dev_tgt,
                                                      const char* register_array_name,
                                                      const uint32_t change_type,
                                                      const uint32_t new_value,
                                                      char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_change_register_array(session_handle,
                                                      dev_tgt,
                                                      register_array_name,
                                                      change_type,
                                                      new_value,
                                                      p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_delete_register_array(pi_session_handle_t session_handle,
                                                      pi_dev_tgt_t dev_tgt,
                                                      const char* register_array_name,
                                                      char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_delete_register_array(session_handle,
                                                      dev_tgt,
                                                      register_array_name,
                                                      p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_trigger(pi_session_handle_t session_handle,
                                        pi_dev_tgt_t dev_tgt,
                                        bool on_or_off,
                                        int trigger_number,
                                        char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_trigger(session_handle,
                                        dev_tgt,
                                        on_or_off,
                                        trigger_number,
                                        p4objects_json_buffer);
}

pi_status_t pi_runtime_reconfig_change_init(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* table_name_next,
                                            char* p4objects_json_buffer) {
    const pi_p4info_t* p4info = pi_get_device_p4info(dev_tgt.dev_id);
    if (!p4info) return PI_STATUS_DEV_NOT_ASSIGNED;
    return _pi_runtime_reconfig_change_init(session_handle,
                                            dev_tgt,
                                            pipeline_name,
                                            table_name_next,
                                            p4objects_json_buffer);
}
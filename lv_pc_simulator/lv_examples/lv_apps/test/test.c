#include "test.h"

void test_start()
{
    //获取当前的屏幕对象
    lv_obj_t * scr = lv_scr_act();
    lv_obj_t * label1 = lv_label_create(scr, NULL);
    lv_label_set_text(label1, "my test");
    lv_obj_align(label1, NULL, LV_ALIGN_CENTER, 0, 0);

    lv_obj_t * scr1 = lv_label_create(src,NULL);

    lv_obj_t * btn1 = lv_btn_create(scr,NULL);

//     //在屏幕上创建一个label控件
//    lv_obj_t * label1 =  lv_label_create(scr, NULL);
//
//    //设置label的文本内容
//    lv_label_set_text(label1, "I am xiong jia yu");
//
//    //设置文本和父控件(在这里就是屏幕)居中对齐
//    lv_obj_align(label1, NULL, LV_ALIGN_CENTER, 0, 0);


//    lv_obj_t * btn = lv_btn_create(scr,NULL);
//    lv_obj_set_pos(btn,50,50);//设置坐标
//    lv_btn_set_ink_in_time(btn,2000);//设置入场动画的时长
//    lv_btn_set_ink_wait_time(btn,3000);//设置维持等待的时长
//    lv_btn_set_ink_out_time(btn,1000);//设置出场动画的时长
}

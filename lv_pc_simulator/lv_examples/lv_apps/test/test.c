#include "test.h"

void test_start()
{
    //��ȡ��ǰ����Ļ����
    lv_obj_t * scr = lv_scr_act();
    lv_obj_t * label1 = lv_label_create(scr, NULL);
    lv_label_set_text(label1, "my test");
    lv_obj_align(label1, NULL, LV_ALIGN_CENTER, 0, 0);

    lv_obj_t * scr1 = lv_label_create(src,NULL);

    lv_obj_t * btn1 = lv_btn_create(scr,NULL);

//     //����Ļ�ϴ���һ��label�ؼ�
//    lv_obj_t * label1 =  lv_label_create(scr, NULL);
//
//    //����label���ı�����
//    lv_label_set_text(label1, "I am xiong jia yu");
//
//    //�����ı��͸��ؼ�(�����������Ļ)���ж���
//    lv_obj_align(label1, NULL, LV_ALIGN_CENTER, 0, 0);


//    lv_obj_t * btn = lv_btn_create(scr,NULL);
//    lv_obj_set_pos(btn,50,50);//��������
//    lv_btn_set_ink_in_time(btn,2000);//�����볡������ʱ��
//    lv_btn_set_ink_wait_time(btn,3000);//����ά�ֵȴ���ʱ��
//    lv_btn_set_ink_out_time(btn,1000);//���ó���������ʱ��
}

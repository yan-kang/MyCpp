#include <iostream>
using namespace std;

class CPU{
	/**
	 * �����CPU��
	 */
public:
	//����ļ��㺯��
	virtual void calculate()=0;
};
class GPU{
	/**
	 * ������Կ���
	 */
public:
	//�������ʾ����
	virtual void display()=0;
};
class MEM{
	/**
	 * ������ڴ�����
	 */
public:
	//����Ĵ洢����
	virtual void storage()=0;
};
class IntelCPU:public CPU{
	/**
	 * ���峧�̵�CPU
	 */
public:
	virtual void calculate(){
		cout<<"Intel��CPU�ڼ���"<<endl;
	}
};
class IntelGPU:public GPU{
	/**
	 * ����ĳ����Կ�
	 */
public:
	virtual void display(){
		cout<<"Intel���Կ������"<<endl;
	}
};
class IntelMEM:public MEM{
	/**
	 * ���峧�̵��ڴ���
	 */
public:
	virtual void storage(){
		cout<<"Intel���ڴ��ڹ���"<<endl;
	}
};
class AMDCPU:public CPU{
	/**
	 * ���峧�̵�CPU
	 */
public:
	virtual void calculate(){
		cout<<"AMD��CPU�ڼ���"<<endl;
	}
};
class AMDGPU:public GPU{
	/**
	 * ����ĳ����Կ�
	 */
public:
	virtual void display(){
		cout<<"AMD���Կ������"<<endl;
	}
};
class AMDMEM:public MEM{
	/**
	 * ���峧�̵��ڴ���
	 */
public:
	virtual void storage(){
		cout<<"AMD���ڴ��ڹ���"<<endl;
	}
};
class Computer{
	/**
	 *������
	 * 
	 */
private:
	CPU *m_cpu;//CPU���ָ��
	GPU *m_gpu;//�Կ�ָ��
	MEM *m_mem;//�ڴ���ָ��
public:
	Computer(CPU *cpu,GPU *gpu,MEM *mem){
		m_cpu=cpu;
		m_gpu=gpu;
		m_mem=mem;
	}
	//����Ӳ���ӿڵĺ���
	void work(){
		m_cpu->calculate();
		m_gpu->display();
		m_mem->storage();
	}
	//�ṩ���������ͷ��������
	~Computer(){
		if(m_cpu!=NULL){
			delete m_cpu;
			m_cpu=NULL;
		}
		if(m_gpu!=NULL){
			delete m_gpu;
			m_gpu=NULL;
		}
		if(m_mem!=NULL){
			delete m_mem;
			m_mem=NULL;
		}
	}
};
void test01(){
	/**
	 * ����
	 */
	//��һ̨����
	CPU * inteCpu=new IntelCPU;
	GPU * intelGpu=new IntelGPU;
	MEM * intelMem=new IntelMEM;
	Computer *comp1=new Computer(inteCpu,intelGpu,intelMem);
	comp1->work();
	delete comp1;

	//�ڶ�̨����
	cout<<"-----------------"<<endl;
	Computer *comp2=new Computer(new AMDCPU,new AMDGPU,new AMDMEM);
	comp2->work();
	delete comp2;
	//����̨����
	cout<<"-----------------"<<endl;
	Computer *comp3=new Computer(new IntelCPU,new AMDGPU,new IntelMEM);
	comp3->work();
	delete comp3;
}
int main() {
	test01();
	return 0;
}
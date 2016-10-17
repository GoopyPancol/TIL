package bricks.pro.alba.pancol.bricksmanual;

import android.content.Context;

import android.graphics.drawable.Drawable;
import android.media.Image;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.ListView;
import android.widget.TextView;

import java.util.ArrayList;

/**
 * Created by choihyeonjun on 2016. 8. 18..
 */

public class ListViewAdapter extends BaseAdapter {
    private Context mContext = null;
    private ArrayList<ListData> mListData = new ArrayList<ListData>();

    public ListViewAdapter(Context mContext) {
        super();
        this.mContext = mContext;
    }

    @Override
// 현재 아이템의 수를 리턴
    public int getCount() {
        return mListData.size();
    }
    // 현재 아이템의 오브젝트를 리턴, Object를 상황에 맞게 변경하거나 리턴받은 오브젝트를 캐스팅해서 사용
    @Override
    public Object getItem(int position) {
        return mListData.get(position);
    }
    // 아이템 position의 ID 값 리턴
    @Override
    public long getItemId(int position) {
        return position;
    }
    // 출력 될 아이템 관리
    @Override
    public View getView(int position, View convertView, ViewGroup parent) {
        ViewHolder holder;
        if(convertView==null){
            holder = new ViewHolder();

            LayoutInflater inflater = (LayoutInflater) mContext.getSystemService(Context.LAYOUT_INFLATER_SERVICE);
            convertView = inflater.inflate(R.layout.listview_item, parent, false);

            holder.mImage=(ImageView) convertView.findViewById(R.id.icon);
            holder.mName=(TextView) convertView.findViewById(R.id.name);
            holder.mRecipe=(TextView)convertView.findViewById(R.id.recipe);

            convertView.setTag(holder);
        }else {
            holder=(ViewHolder)convertView.getTag();
        }
        ListData mData = mListData.get(position);
        if(mData.mImage!=null){
            holder.mImage.setVisibility(View.VISIBLE);
            holder.mImage.setImageDrawable(mData.mImage);
        }else{
            holder.mImage.setVisibility(View.GONE);
        }
        holder.mName.setText(mData.mName);
        holder.mRecipe.setText(mData.mRecipe);

        return convertView;
    }
    private class ListData{
        public Drawable mImage;

        public String mName;

        public String mRecipe;
    }
    private class ViewHolder{
        public ImageView mImage;

        public TextView mName;

        public TextView mRecipe;
    }public void addItem(Drawable image,String mName,String mRecipe){
        ListData addInfo=null;
        addInfo = new ListData();
        addInfo.mImage= image;
        addInfo.mName= mName;
        addInfo.mRecipe= mRecipe;

        mListData.add(addInfo);
    }
}

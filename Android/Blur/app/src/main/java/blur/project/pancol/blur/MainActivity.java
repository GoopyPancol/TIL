package blur.project.pancol.blur;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

import com.qiushui.blurredview.BlurredView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        BlurredView blurredView=(BlurredView)findViewById(R.id.blur);
        blurredView.setBlurredLevel(0);
    }
}
